#pragma once

#include <set>
#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include "mbedtls/base64.h"
#include "types.h"
// #include "date.h"
#include "bbl-certs.h"

#if defined(__XTOUCH_SCREEN_28__)
#define Serial0 Serial
#endif

bool xtouch_cloud_pair_loop_exit = false;
#if defined(NO_SD)
#define XTOUCH_FS SPIFFS
#else
#define XTOUCH_FS SD
#endif

class BambuCloud
{

private:
  String _region;
  String _username;
  String _auth_token;
  String _password;

  String _getAuthToken(String verificationCode = "")
  {
    Serial0.println("Getting accessToken from Bambu Cloud");
    String url = _region == "China" ? "https://api.bambulab.cn/v1/user-service/user/login" : "https://api.bambulab.com/v1/user-service/user/login";

    HTTPClient http;
    // http.begin(url, getRegionCert());
    http.setTimeout(30000);
    http.begin(url);
    http.addHeader("Content-Type", "application/json");

    String payload;
    if (verificationCode == "")
    {
      payload = "{\"account\":\"" + _email + "\",\"password\":\"" + _password + "\"}";
    }
    else
    {
      payload = "{\"account\":\"" + _email + "\",\"code\":\"" + verificationCode + "\"}";
    }

    int httpResponseCode = http.POST(payload);
    if (httpResponseCode != 200)
    {
      Serial0.printf("Received error: %d\n", httpResponseCode);
      http.end();
      return "";
    }

    String response = http.getString();
    http.end();

    DynamicJsonDocument doc(4096);
    deserializeJson(doc, response);

    if (doc.containsKey("loginType") && doc["loginType"] == "verifyCode")
    {
      return "verifyCode";
    }
    return doc["accessToken"].as<String>();
  }

  const char *getRegionCert() const
  {
    return _region == "China" ? api_bambulab_cn_CA : api_bambulab_com_CA;
  }

  String _decodeString(String inputString)
  {
    const unsigned char *input = (const unsigned char *)inputString.c_str();
    size_t inputLength = strlen((const char *)input);

    // Calculate the exact maximum length for the output buffer
    size_t maxOutputLength = (inputLength * 3) / 4;
    unsigned char output[maxOutputLength + 1]; // +1 for the null terminator
    size_t outlen;

    int ret = mbedtls_base64_decode(output, maxOutputLength, &outlen, input, inputLength);

    if (ret == 0)
    {
      output[outlen] = '\0'; // Null-terminate the output
      return String((char *)output);
    }

    Serial0.println("Failed to decode base64");
    return "";
  }

  String _getUserFromAuthToken()
  {
    if (_region == "China"){
      DynamicJsonDocument wifiConfig = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_config);
      String user_id = "u_" +wifiConfig["user-id"].as<String>();
      Serial0.printf("User ID: %s\n", user_id.c_str());
      return user_id;
    }else{
      // User name is in the 2nd portion of the auth token (delimited with periods)
      int firstDot = _auth_token.indexOf('.');
      int secondDot = _auth_token.indexOf('.', firstDot + 1);
      String b64_string = _auth_token.substring(firstDot + 1, secondDot);

      // String must be multiples of 4 chars in length. For decode pad with = character
      while (b64_string.length() % 4 != 0)
      {
        b64_string += "=";
      }

      const unsigned char *input = (const unsigned char *)b64_string.c_str();
      size_t inputLength = strlen((const char *)input);

      // Calculate the exact maximum length for the output buffer
      size_t maxOutputLength = (inputLength * 3) / 4;
      unsigned char output[maxOutputLength + 1]; // +1 for the null terminator
      size_t outlen;

      int ret = mbedtls_base64_decode(output, maxOutputLength, &outlen, input, inputLength);

      if (ret == 0)
      {
        output[outlen] = '\0'; // Null-terminate the output

        DynamicJsonDocument doc(1024);
        DeserializationError error = deserializeJson(doc, (const char *)output);

        if (error)
        {
          Serial0.print(F("deserializeJson() failed: "));
          Serial0.println(error.f_str());
          return "";
        }

        return doc["username"].as<String>();
      }

      Serial0.println("Failed to decode base64");
      return "";
    }
  }

public:
  String _email;
  bool loggedIn = false;
  bool requestVerificationCodeRequested = false;
  void requestVerificationCode()
  {
    if (requestVerificationCodeRequested)
    {
      return;
    }
    requestVerificationCodeRequested = true;
    Serial0.println("Requesting verification code from Bambu Cloud");
    String url = _region == "China" ? "https://api.bambulab.cn/v1/user-service/user/sendemail/code" : "https://api.bambulab.com/v1/user-service/user/sendemail/code";

    HTTPClient http;
    // http.begin(url, getRegionCert());
    http.begin(url);
    http.addHeader("Content-Type", "application/json");

    String payload = "{\"email\":\"" + _email + "\",\"type\":\"codeLogin\"}";
    int httpResponseCode = http.POST(payload);
    if (httpResponseCode != 200)
    {
      Serial0.printf("Received error: %d\n", httpResponseCode);
      http.end();
      return;
    }

    String response = http.getString();
    http.end();
  }

  bool mainLogin(String verificationCode)
  {

    if (login(verificationCode))
    {
      if (!isPaired())
      {
        selectPrinter();
      }
      else
      {
        loadPair();
      }

      loggedIn = true;
      return true;
    }

    if (verificationCode == "")
    {

      requestVerificationCode();
    }
    return false;
  }

  bool login(String verificationCode = "")
  {

    lv_label_set_text(introScreenCaption, LV_SYMBOL_CHARGE " 登录到拓竹服务器");
    lv_timer_handler();
    lv_task_handler();
    delay(32);

    DynamicJsonDocument wifiConfig = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_config);

    if (!wifiConfig.containsKey("cloud-region") || !wifiConfig.containsKey("cloud-email") || !wifiConfig.containsKey("cloud-password"))
    {

      lv_label_set_text(introScreenCaption, LV_SYMBOL_CHARGE " 配置文件格式错误, 请重新刷入");
      lv_timer_handler();
      lv_task_handler();
      delay(3000);
      ESP.restart();

      return false;
    }

    _region = wifiConfig["cloud-region"].as<const char *>();
    _email = _decodeString(wifiConfig["cloud-email"].as<String>());
    _password = _decodeString(wifiConfig["cloud-password"].as<String>());

    if( _region=="China" && !wifiConfig.containsKey("user-id")){
      lv_label_set_text(introScreenCaption, LV_SYMBOL_CHARGE " 配置文件缺少User-ID, 请重新刷入");
      lv_timer_handler();
      lv_task_handler();
      delay(3000);
      ESP.restart();
      return false;
    }

    lv_label_set_text(introScreenCaption, LV_SYMBOL_CHARGE " 正在获取 JWT Token");
    lv_timer_handler();
    lv_task_handler();
    delay(32);

    if (verificationCode == "")
    {
      _auth_token = _getAuthToken();
    }
    else
    {
      _auth_token = _getAuthToken(verificationCode);
    }

    if (_auth_token == "verifyCode")
    {
      String page = "http://" + WiFi.localIP().toString();
      String gotoCode = "请连接到wifi\"" + WiFi.SSID() +"\"后扫码进入配置网页\n或直接访问局域网网址: http://" + WiFi.localIP().toString();
      lv_label_set_text(introScreenCaption, gotoCode.c_str());
      // const char * data = "https://gitee.com/meiziyang2023/xtouchumeko-version-tutorial";
      //lv_qrcode_update(introScreenQr, page.c_str(), strlen(page.c_str()));
      lv_timer_handler();
      lv_task_handler();

      return false;
    }

    if (_auth_token == "")
    {
      lv_label_set_text(introScreenCaption, LV_SYMBOL_CHARGE " 拓竹用户名或密码错误");
      lv_timer_handler();
      lv_task_handler();
      delay(3000);

      return false;
    }
    _username = _getUserFromAuthToken();

    if (_auth_token == "" || _username == "")
    {

      lv_label_set_text(introScreenCaption, LV_SYMBOL_CHARGE " Bambu Cloud凭据解析失败");
      lv_timer_handler();
      lv_task_handler();
      delay(3000);
      ESP.restart();

      return false;
    }

    saveAuthTokens();

    lv_label_set_text(introScreenCaption, LV_SYMBOL_CHARGE " Logged to BBL Cloud");
    lv_timer_handler();
    lv_task_handler();
    delay(32);
    return true;
  }

  JsonArray getDeviceList()
  {
    Serial0.println(_region);
    Serial0.println("Getting device list from Bambu Cloud");
    String url = _region == "China" ? "https://api.bambulab.cn/v1/iot-service/api/user/bind" : "https://api.bambulab.com/v1/iot-service/api/user/bind";

    HTTPClient http;
    // http.begin(url, getRegionCert());
    http.begin(url);
    http.addHeader("Authorization", "Bearer " + _auth_token);
    http.addHeader("Content-Type", "application/json");

    int httpResponseCode = http.GET();
    if (httpResponseCode != 200)
    {
      Serial0.printf("Received error: %d\n", httpResponseCode);
      http.end();
      DynamicJsonDocument emptyDoc(1024);
      return emptyDoc.to<JsonArray>();
    }

    String response = http.getString();
    http.end();

    DynamicJsonDocument doc(2048);
    deserializeJson(doc, response);
    return doc["devices"].as<JsonArray>();
  }

  JsonArray getPrivateFilaments()
  {
    return xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_private_filaments_flat, true).as<JsonArray>();
  }

  void updatePrivateFilaments()
  {

    Serial0.println("Getting Private Filament list from Bambu Cloud");
    String url = (_region == "China") ? "https://api.bambulab.cn/v1/iot-service/api/slicer/setting?version=undefined" : "https://api.bambulab.com/v1/iot-service/api/slicer/setting?version=undefined";

    HTTPClient http;
    // http.begin(url, getRegionCert());
    http.begin(url);
    http.addHeader("Authorization", "Bearer " + _auth_token);

    int httpResponseCode = http.GET();

    DynamicJsonDocument result(8192 * 2);

    if (httpResponseCode > 0)
    { // Check for the returning code
      if (httpResponseCode == HTTP_CODE_OK)
      {
        WiFiClient *client = http.getStreamPtr();

        if (client->find("\"filament\":"))
        {
          if (client->find("\"private\":"))
          {
            DynamicJsonDocument filter(256);
            filter["name"] = true;
            filter["filament_id"] = true;
            filter["nozzle_temperature"] = true;
            filter["filament_vendor"] = true;
            filter["filament_type"] = true;

            client->find("[");
            do
            {
              // Deserialize the next
              DynamicJsonDocument doc(1024);
              auto err = deserializeJson(doc, *client, DeserializationOption::Filter(filter));

              if (err)
              {
                Serial0.print(F("deserializeJson() failed with code "));
                Serial0.println(err.c_str());
                client->stop();
                return;
              }
              doc["tray_info_idx"] = doc["filament_id"];

              doc["nozzle_temp_min"] = doc["nozzle_temperature"][0];
              doc["nozzle_temp_max"] = doc["nozzle_temperature"][1];

              doc["vendor"] = doc["filament_vendor"];
              doc["tray_type"] = doc["filament_type"];

              String name = doc["name"].as<String>();
              int atIndex = name.indexOf('@');
              if (atIndex != -1)
              {
                name = name.substring(0, atIndex);
                name.trim();
                doc["name"] = name;
              }

              doc.remove("filament_type");
              doc.remove("filament_vendor");
              doc.remove("filament_id");
              doc.remove("nozzle_temperature");
              result.add(doc);

            } while (client->findUntil(",", "]"));

            result.shrinkToFit();

            // Create a set to track seen tray_info_idx values
            std::set<String> seenIndices;

            // Create a temporary array to hold unique items
            DynamicJsonDocument uniqueDoc(8192);
            JsonArray uniqueArray = uniqueDoc.to<JsonArray>();

            // Iterate through the array and remove duplicates
            for (JsonObject obj : result.as<JsonArray>())
            {
              String trayInfoIdx = obj["tray_info_idx"].as<String>();

              if (seenIndices.find(trayInfoIdx) == seenIndices.end())
              {
                // If tray_info_idx is not in the set, add it to the set and unique array
                seenIndices.insert(trayInfoIdx);
                uniqueArray.add(obj);
              }
            }

            result.shrinkToFit();
            result.clear();

            DynamicJsonDocument flat(8192);
            JsonArray flatArray = flat.to<JsonArray>();
            for (JsonObject obj : uniqueArray)
            {

              DynamicJsonDocument tempDoc(256);
              JsonArray tempArray = tempDoc.to<JsonArray>();
              tempArray.add(obj["tray_info_idx"]);
              tempArray.add(obj["vendor"]);
              tempArray.add(obj["name"]);
              tempArray.add(obj["nozzle_temp_min"]);
              tempArray.add(obj["nozzle_temp_max"]);
              tempArray.add(obj["tray_type"]);

              flatArray.add(tempArray);
            }

            uniqueDoc.shrinkToFit();

            // xtouch_filesystem_writeJson(XTOUCH_FS, xtouch_paths_private_filaments, uniqueDoc);
            xtouch_filesystem_writeJson(XTOUCH_FS, xtouch_paths_private_filaments_flat, flat);
          }
        }
        client->stop();
      }
      else
      {
        Serial0.printf("GET request failed, error: %s\n", http.errorToString(httpResponseCode).c_str());
      }
    }
  }

  String getUsername() const
  {
    return _username;
  }

  String getAuthToken() const
  {
    return _auth_token;
  }

  const char *getMqttCloudHost() const
  {
    return _region == "China" ? "cn.mqtt.bambulab.com" : "us.mqtt.bambulab.com";
  }

  String getRegion()
  {
    return _region;
  }

  void selectPrinter()
  {
    JsonArray devices = getDeviceList();
    DynamicJsonDocument printers = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_printers, false);

    for (JsonVariant v : devices)
    {
      if (!printers.containsKey(v["dev_id"].as<String>()))
      {
        printers[v["dev_id"].as<String>()] = v;
      }
    }

    serializeJsonPretty(printers, Serial);
    xtouch_filesystem_writeJson(XTOUCH_FS, xtouch_paths_printers, printers);

    if (devices.size() == 0)
    {
      Serial0.println("No devices found in Bambu Cloud");

      lv_label_set_text(introScreenCaption, LV_SYMBOL_CHARGE " 该账户旗下无打印机");
      lv_timer_handler();
      lv_task_handler();
      delay(3000);
      ESP.restart();
      return;
    }

    if (devices.size() == 1)
    {
      // auto select the only device
      setCurrentDevice(devices[0]["dev_id"].as<String>());
      setCurrentModel(devices[0]["dev_model_name"].as<String>());
      setPrinterName(devices[0]["name"].as<String>());

      JsonObject currentPrinterSettings = loadPrinters()[xTouchConfig.xTouchSerialNumber]["settings"];
      xTouchConfig.xTouchChamberSensorEnabled = currentPrinterSettings.containsKey("chamberTemp") ? currentPrinterSettings["chamberTemp"].as<bool>() : false;
      xTouchConfig.xTouchAuxFanEnabled = currentPrinterSettings.containsKey("auxFan") ? currentPrinterSettings["auxFan"].as<bool>() : false;
      xTouchConfig.xTouchChamberFanEnabled = currentPrinterSettings.containsKey("chamberFan") ? currentPrinterSettings["chamberFan"].as<bool>() : false;

      savePrinterPair(devices[0]["dev_id"].as<String>(), devices[0]["dev_model_name"].as<String>(), devices[0]["name"].as<String>());

      return;
    }

    loadScreen(5);

    String output = "";
    for (JsonVariant v : devices)
    {
      output = output + LV_SYMBOL_CHARGE + " " + v["dev_id"].as<String>() + "\n";
    }

    if (!output.isEmpty())
    {
      output.remove(output.length() - 1);
      lv_roller_set_options(ui_printerPairScreenRoller, output.c_str(), LV_ROLLER_MODE_NORMAL);
      lv_obj_clear_flag(ui_printerPairScreenSubmitButton, LV_OBJ_FLAG_HIDDEN);

      while (!xtouch_cloud_pair_loop_exit)
      {
        lv_timer_handler();
        lv_task_handler();
      }
      uint16_t currentIndex = lv_roller_get_selected(ui_printerPairScreenRoller);
      setCurrentDevice(devices[currentIndex]["dev_id"].as<String>());
      setCurrentModel(devices[currentIndex]["dev_model_name"].as<String>());
      setPrinterName(devices[currentIndex]["name"].as<String>());

      JsonObject currentPrinterSettings = loadPrinters()[xTouchConfig.xTouchSerialNumber]["settings"];
      xTouchConfig.xTouchChamberSensorEnabled = currentPrinterSettings.containsKey("chamberTemp") ? currentPrinterSettings["chamberTemp"].as<bool>() : false;
      xTouchConfig.xTouchAuxFanEnabled = currentPrinterSettings.containsKey("auxFan") ? currentPrinterSettings["auxFan"].as<bool>() : false;
      xTouchConfig.xTouchChamberFanEnabled = currentPrinterSettings.containsKey("chamberFan") ? currentPrinterSettings["chamberFan"].as<bool>() : false;

      savePrinterPair(devices[currentIndex]["dev_id"].as<String>(), devices[currentIndex]["dev_model_name"].as<String>(), devices[currentIndex]["name"].as<String>());
    }

    loadScreen(-1);
  }

  void savePrinterPair(String usn, String modelName, String printerName)
  {

    DynamicJsonDocument doc = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_pair, false);

    doc["paired"] = usn.c_str();
    doc["model"] = modelName.c_str();
    doc["printerName"] = printerName.c_str();

    xtouch_filesystem_writeJson(XTOUCH_FS, xtouch_paths_pair, doc);
  }

  bool isPaired()
  {
    if (!xtouch_filesystem_exist(XTOUCH_FS, xtouch_paths_pair))
    {
      return false;
    }
    DynamicJsonDocument doc = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_pair, false);
    return doc["paired"].as<String>() != "";
  }

  void loadPair()
  {
    DynamicJsonDocument doc = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_pair, false);
    setCurrentDevice(doc["paired"].as<String>());
    setCurrentModel(doc["model"].as<String>());
    setPrinterName(doc["printerName"].as<String>());
  }

  void setCurrentDevice(String deviceId)
  {
    strcpy(xTouchConfig.xTouchSerialNumber, deviceId.c_str());
  }

  void setPrinterName(String printerName)
  {
    strcpy(xTouchConfig.xTouchPrinterName, printerName.c_str());
  }

  void setCurrentModel(String model)
  {
    strcpy(xTouchConfig.xTouchPrinterModel, model.c_str());
  }

  DynamicJsonDocument loadPrinters()
  {
    return xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_printers, false);
  }

  void clearDeviceList()
  {
    DynamicJsonDocument pairDoc(32);
    xtouch_filesystem_writeJson(XTOUCH_FS, xtouch_paths_printers, pairDoc);
  }

  void clearPairList()
  {
    xtouch_filesystem_deleteFile(XTOUCH_FS, xtouch_paths_pair);
  }
  void clearTokens()
  {
    xtouch_filesystem_deleteFile(XTOUCH_FS, xtouch_paths_tokens);
  }

  void unpair()
  {
    ConsoleInfo.println("[XTOUCH][SSDP] Unpairing device");
    DynamicJsonDocument pairFile = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_pair, false);
    pairFile["paired"] = "";
    xtouch_filesystem_writeJson(XTOUCH_FS, xtouch_paths_pair, pairFile);
    ESP.restart();
  }

  void saveAuthTokens()
  {
    DynamicJsonDocument doc(2048);
    doc["authToken"] = _auth_token;
    xtouch_filesystem_writeJson(XTOUCH_FS, xtouch_paths_tokens, doc, false, 2048);
    ESP.restart();
  }

  void loadAuthTokens()
  {
    ConsoleLog.println(ESP.getFreeHeap());
    DynamicJsonDocument wifiConfig = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_config);
    _region = wifiConfig["cloud-region"].as<const char *>();
    _email = wifiConfig["cloud-email"].as<String>();
    _password = wifiConfig["cloud-password"].as<String>();

    DynamicJsonDocument doc = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_tokens, false, 2048);
    _auth_token = doc["authToken"].as<String>();
    _username = _getUserFromAuthToken();
    loggedIn = true;
  }

  bool hasAuthTokens()
  {
    if (!xtouch_filesystem_exist(XTOUCH_FS, xtouch_paths_tokens))
    {
      return false;
    }
    DynamicJsonDocument doc = xtouch_filesystem_readJson(XTOUCH_FS, xtouch_paths_tokens, false, 2048);
    return doc["authToken"].as<String>() != "";
  }
};
BambuCloud cloud;

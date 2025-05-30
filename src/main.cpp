#define NO_SD

//#define XTOUCH_DEBUG_INFO true

#include <driver/i2s.h>
#include <Arduino.h>
#include <ArduinoJson.h>
#include "xtouch/debug.h"
#include "xtouch/paths.h"
#include "xtouch/eeprom.h"
#include "xtouch/types.h"
#include "xtouch/bblp.h"
#include "xtouch/globals.h"
#include "xtouch/filesystem.h"
#include "ui/ui.h"
#include "xtouch/sdcard.h"
#include "xtouch/hms.h"

#if defined(__XTOUCH_SCREEN_28__)
#include "devices/2.8/screen.h"
#endif

#if defined(__XTOUCH_SCREEN_50__)
#include "devices/5.0/screen.h"
#endif

#include "xtouch/cloud.hpp"
#include "xtouch/settings.h"
#include "xtouch/net.h"
#include "xtouch/firmware.h"
#include "xtouch/mqtt.h"
#include "xtouch/sensors/chamber.h"
#include "xtouch/events.h"
#include "xtouch/connection.h"
#include "xtouch/coldboot.h"
#include "xtouch/webserver.h"

void xtouch_intro_show(void)
{
  ui_introScreen_screen_init();
  lv_disp_load_scr(introScreen);
  lv_timer_handler();
}

void setup()
{

//#if XTOUCH_USE_SERIAL == true || XTOUCH_DEBUG_ERROR == true || XTOUCH_DEBUG_DEBUG == true || XTOUCH_DEBUG_INFO == true
  
  Serial0.begin(115200);
  Serial0.println("Serial0");
  
//#endif

  xtouch_eeprom_setup();
  xtouch_globals_init();
  xtouch_screen_setup();
  xtouch_intro_show();
  while (!xtouch_sdcard_setup())
    ;

  xtouch_coldboot_check();

  xtouch_settings_loadSettings();

  // xtouch_firmware_checkFirmwareUpdate();

  while (!xtouch_wifi_setup());

  // xtouch_firmware_checkOnlineFirmwareUpdate();

  xtouch_screen_setupScreenTimer();
  xtouch_setupGlobalEvents();
  if (!cloud.hasAuthTokens())
  {
    cloud.mainLogin("");

    if (!cloud.mainLogin(""))
    {
      xtouch_webserver_begin();
    }
    else
    {
      xtouch_mqtt_setup();
    }
  }
  else
  {
    cloud.loadAuthTokens();

    if (!cloud.isPaired())
    {
      cloud.selectPrinter();
    }
    else
    {
      cloud.loadPair();
    }
    xtouch_mqtt_setup();
  }
  xtouch_chamber_timer_init();
}

void loop()
{
  lv_timer_handler();
  lv_task_handler();
  if (cloud.loggedIn)
    xtouch_mqtt_loop();
}

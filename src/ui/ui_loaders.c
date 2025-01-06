
#include "ui.h"
#include "ui_msgs.h"

#define XTOUCH_SCREEN_INTRO      -1
#define XTOUCH_SCREEN_HOME        0
#define XTOUCH_SCREEN_TEMPERATURE 1
#define XTOUCH_SCREEN_CONTRL      2
#define XTOUCH_SCREEN_FILAMENT    3
#define XTOUCH_SCREEN_SETTINGS    4
#define XTOUCH_SCREEN_PRINTERPAIR 5
#define XTOUCH_SCREEN_ACCESSCODE  6


void sendMqttMsg(int message, uint32_t data)
{
    struct XTOUCH_MESSAGE_DATA eventData;
    eventData.data = data;
    lv_msg_send(message, &eventData);
}

void fillScreenData(int screen)
{
    switch (screen)
    {
    case 0:
        sendMqttMsg(XTOUCH_ON_BED_TEMP, bambuStatus.bed_temper);
        sendMqttMsg(XTOUCH_ON_BED_TARGET_TEMP, bambuStatus.bed_target_temper);
        sendMqttMsg(XTOUCH_ON_NOZZLE_TEMP, bambuStatus.nozzle_temper);
        sendMqttMsg(XTOUCH_ON_NOZZLE_TARGET_TEMP, bambuStatus.nozzle_target_temper);
        sendMqttMsg(XTOUCH_ON_LIGHT_REPORT, bambuStatus.chamberLed);
        sendMqttMsg(XTOUCH_ON_AMS, bambuStatus.ams);
        sendMqttMsg(XTOUCH_ON_PRINT_STATUS, 0);
        sendMqttMsg(XTOUCH_ON_CHAMBER_TEMP, bambuStatus.chamber_temper);
        break;
    case 1:
        sendMqttMsg(XTOUCH_ON_BED_TEMP, bambuStatus.bed_temper);
        sendMqttMsg(XTOUCH_ON_BED_TARGET_TEMP, bambuStatus.bed_target_temper);
        sendMqttMsg(XTOUCH_ON_NOZZLE_TEMP, bambuStatus.nozzle_temper);
        sendMqttMsg(XTOUCH_ON_NOZZLE_TARGET_TEMP, bambuStatus.nozzle_target_temper);
        sendMqttMsg(XTOUCH_ON_PART_FAN_SPEED, bambuStatus.cooling_fan_speed);
        sendMqttMsg(XTOUCH_ON_PART_AUX_SPEED, bambuStatus.big_fan1_speed);
        sendMqttMsg(XTOUCH_ON_PART_CHAMBER_SPEED, bambuStatus.big_fan2_speed);
        break;
    case 2:
        sendMqttMsg(XTOUCH_CONTROL_INC_SWITCH, controlMode.inc);
        break;
    case 3:
        sendMqttMsg(XTOUCH_ON_NOZZLE_TEMP, bambuStatus.nozzle_temper);
        break;
    }
}

void loadScreen(int screen)
{
    xTouchConfig.currentScreenIndex = screen;
    lv_obj_t *current = lv_scr_act();
    if (current != NULL)
    {
        lv_obj_clean(current);
        lv_obj_del(current);
    }

    switch (screen)
    {
    case XTOUCH_SCREEN_INTRO:
        ui_introScreen_screen_init();
        lv_disp_load_scr(introScreen);
        break;
    case XTOUCH_SCREEN_HOME:
        ui_homeScreen_screen_init();
        lv_disp_load_scr(ui_homeScreen);
        break;
    case XTOUCH_SCREEN_TEMPERATURE:
        ui_temperatureScreen_screen_init();
        lv_disp_load_scr(ui_temperatureScreen);
        break;
    case XTOUCH_SCREEN_CONTRL:
        ui_controlScreen_screen_init();
        lv_disp_load_scr(ui_controlScreen);
        break;
    case XTOUCH_SCREEN_FILAMENT:
        ui_filamentScreen_screen_init();
        lv_disp_load_scr(ui_filamentScreen);
        break;
    case XTOUCH_SCREEN_SETTINGS:
        ui_settingsScreen_screen_init();
        lv_disp_load_scr(ui_settingsScreen);
        break;
    case XTOUCH_SCREEN_PRINTERPAIR:
        ui_printerPairScreen_screen_init();
        lv_disp_load_scr(ui_printerPairScreen);
        break;
    case XTOUCH_SCREEN_ACCESSCODE:
        ui_accessCodeScreen_screen_init();
        lv_disp_load_scr(ui_accessCodeScreen);
        break;
    }

    fillScreenData(screen);

    if (screen >= 0 && screen < 5)
    {
        ui_sidebarComponent_set_active(screen);
    }
}

void initTopLayer()
{
    ui_confirmComponent = ui_confirmPanel_create(lv_layer_top());
    lv_obj_add_flag(ui_confirmComponent, LV_OBJ_FLAG_HIDDEN);
    ui_hmsComponent = ui_hmsPanel_create(lv_layer_top());
    lv_obj_add_flag(ui_hmsComponent, LV_OBJ_FLAG_HIDDEN);
}
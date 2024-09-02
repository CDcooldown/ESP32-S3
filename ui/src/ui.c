// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"
#include "Arduino.h"
#include "all_extern.h"

///////////////////// VARIABLES ////////////////////
void Start_Animation(lv_obj_t *TargetObject, int delay);

// SCREEN: ui_Main
void ui_Main_screen_init(void);
lv_obj_t *ui_Main;
lv_obj_t *ui_PanelInit;
lv_obj_t *ui_WiFiIsConnect;
lv_obj_t *ui_WiFiNoConnect;
lv_obj_t *ui_WelcomeLab;
lv_obj_t *ui_Electricity;
lv_obj_t *ui_PanelTime;
lv_obj_t *ui_LabelTime1;
lv_obj_t *ui_LabelTime2;
lv_obj_t *ui_TabViewApp;
lv_obj_t *ui_TabPageApp;
lv_obj_t *ui_PanelSet;
lv_obj_t *ui_ToSet;
lv_obj_t *ui_LabelSet;
lv_obj_t *ui_PanelSerial;
void ui_event_ToSerial(lv_event_t *e);
lv_obj_t *ui_ToSerial;
lv_obj_t *ui_LabelSerial;
lv_obj_t *ui_PanelWeather;
void ui_event_ToWeather(lv_event_t *e);
lv_obj_t *ui_ToWeather;
lv_obj_t *ui_LabelWeather;
lv_obj_t *ui_PanelMusic;
void ui_event_ToMusic(lv_event_t *e);
lv_obj_t *ui_ToMusic;
lv_obj_t *ui_LabelMusic;
lv_obj_t *ui_PanelGPT;
void ui_event_ToGPT(lv_event_t *e);
lv_obj_t *ui_ToGPT;
lv_obj_t *ui_LabelGPT;
lv_obj_t *ui_PanelGame;
void ui_event_ToGame(lv_event_t *e);
lv_obj_t *ui_ToGame;
lv_obj_t *ui_LabelGame;
lv_obj_t *ui_PanelCal;
void ui_event_ToCal(lv_event_t *e);
lv_obj_t *ui_ToCal;
lv_obj_t *ui_LabelCal;
lv_obj_t *ui_PanelAbout;
void ui_event_ToAbout(lv_event_t *e);
lv_obj_t *ui_ToAbout;
lv_obj_t *ui_LabelAbout;
lv_obj_t * ui_PanelMove;
void ui_event_ToMove(lv_event_t * e);
lv_obj_t * ui_ToMove;
lv_obj_t * ui_LabelMove;
// SCREEN: ui_Serial
void ui_Serial_screen_init(void);
lv_obj_t *ui_Serial;
void ui_event_SerialBackToMain(lv_event_t *e);
lv_obj_t *ui_SerialBackToMain;
void ui_event_TextSerial(lv_event_t *e);
lv_obj_t *ui_TextSerial;
void ui_event_SerialSend(lv_event_t *e);
lv_obj_t *ui_SerialSend;
lv_obj_t *ui_TextSerialRx;
void ui_event_SerialDelete(lv_event_t *e);
lv_obj_t *ui_SerialDelete;
void ui_event_RateSelect(lv_event_t *e);
lv_obj_t *ui_RateSelect;
void ui_event_KeyboardSerial(lv_event_t *e);
lv_obj_t *ui_KeyboardSerial;

// SCREEN: ui_Set
void ui_Set_screen_init(void);
lv_obj_t *ui_Set;
void ui_event_SetBackToMain(lv_event_t *e);
lv_obj_t *ui_SetBackToMain;
lv_obj_t *ui_PanelSetLight;
void ui_event_SetLight(lv_event_t *e);
lv_obj_t *ui_SetLight;
lv_obj_t *ui_LabelLightValue;
lv_obj_t *ui_LabelLight;
lv_obj_t *ui_PanelWiFi;
lv_obj_t *ui_LabelWiFi;
void ui_event_OnOffWiFi(lv_event_t *e);
lv_obj_t *ui_OnOffWiFi;
lv_obj_t *ui_PanelScanWiFi;
void ui_event_EnterPassword(lv_event_t *e);
lv_obj_t *ui_EnterPassword;
lv_obj_t *ui_RollerWiFi;
void ui_event_RollerGetWiFi(lv_event_t *e);
lv_obj_t *ui_ConnectStatus;
lv_obj_t *ui_SpinnerWaitWiFi;
lv_obj_t *ui_PanelConnect;
void ui_event_KeyboardWiFi(lv_event_t *e);
lv_obj_t *ui_KeyboardWiFi;
lv_obj_t *ui_PanelPassword;
lv_obj_t *ui_TextWiFiPassword;
lv_obj_t *ui_LabelWiFiName;
void ui_event_CancelEnter(lv_event_t *e);
lv_obj_t *ui_CancelEnter;

// SCREEN: ui_Weather
void ui_Weather_screen_init(void);
lv_obj_t *ui_Weather;
lv_obj_t *ui_TabWeather;
lv_obj_t *ui_TabToday;
lv_obj_t *ui_Location;
lv_obj_t *ui_Code;
lv_obj_t *ui_Temp;
lv_obj_t *ui_LabelLocation;
lv_obj_t *ui_LabelCode;
lv_obj_t *ui_LabelTemp;
lv_obj_t *ui_LabelUpdateTime;
lv_obj_t *ui_TabFuture;
lv_obj_t *ui_LabelAllWeather;
lv_obj_t *ui_RollerWeather;
void ui_event_UpdateWeather(lv_event_t *e);
lv_obj_t *ui_UpdateWeather;
void ui_event_WeatherBackToMain(lv_event_t *e);
lv_obj_t *ui_WeatherBackToMain;
lv_obj_t *ui_LabelNoWiFI;

// SCREEN: ui_Music
void ui_Music_screen_init(void);
lv_obj_t *ui_Music;
void ui_event_MusicBackToMain(lv_event_t *e);
lv_obj_t *ui_MusicBackToMain;
void ui_event_RollerMusic(lv_event_t *e);
lv_obj_t *ui_RollerMusic;
void ui_event_SliderVoice(lv_event_t *e);
lv_obj_t *ui_SliderVoice;
lv_obj_t *ui_PanelMusicSet;
void ui_event_StartMusic(lv_event_t *e);
lv_obj_t *ui_StartMusic;
void ui_event_ChangeMusic(lv_event_t *e);
lv_obj_t *ui_ChangeMusic;
lv_obj_t *ui_Label1;

// SCREEN: ui_GPT
void ui_GPT_screen_init(void);
lv_obj_t *ui_GPT;
void ui_event_GPTBackToMain(lv_event_t *e);
lv_obj_t *ui_GPTBackToMain;
lv_obj_t *ui_GPTQuestion;
lv_obj_t *ui_LabelGPTQFace;
lv_obj_t *ui_TextAreaQuestion;
lv_obj_t *ui_GPTAnswer;
lv_obj_t *ui_LabelGPTAFace;
lv_obj_t *ui_TextAreaAnswer;
void ui_event_SwitchSpeak(lv_event_t *e);
lv_obj_t *ui_SwitchSpeak;
lv_obj_t *ui_LabelGPTSwitch;
lv_obj_t *ui_LabelNoWiFi;

// SCREEN: ui_Game
void ui_Game_screen_init(void);
lv_obj_t *ui_Game;
void ui_event_GameBackToMain(lv_event_t *e);
lv_obj_t *ui_GameBackToMain;

// SCREEN: ui_Cal
void ui_Cal_screen_init(void);
lv_obj_t *ui_Cal;
void ui_event_CalBackToMain(lv_event_t *e);
lv_obj_t *ui_CalBackToMain;
lv_obj_t *ui_Calendar;

// SCREEN: ui_About
void ui_About_screen_init(void);
lv_obj_t *ui_About;
void ui_event_AboutBackToMain(lv_event_t *e);
lv_obj_t *ui_AboutBackToMain;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Label3;
lv_obj_t *ui_LabelAbout;
lv_obj_t *ui_LabelAbout1;
lv_obj_t *ui_LabelAbout2;
lv_obj_t *ui_LabelAbout3;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Image6;
lv_obj_t *ui_LabelAbout4;
lv_obj_t *ui_LabelAbout5;
lv_obj_t *ui_Panel3;
lv_obj_t *ui_Image7;
lv_obj_t *ui_Image8;
lv_obj_t *ui_Image9;
lv_obj_t *ui_Label9;

// SCREEN: ui_Move
void ui_Move_screen_init(void);
lv_obj_t * ui_Move;
void ui_event_MoveBackToMain(lv_event_t * e);
lv_obj_t * ui_MoveBackToMain;
lv_obj_t * ui_Button2;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
void ui_event_SwitchSpeak2(lv_event_t * e);
lv_obj_t * ui_SwitchSpeak2;
lv_obj_t * ui_LabelGPTSwitch2;
lv_obj_t * ui_TextCommand;
lv_obj_t *ui____initial_actions0;

lv_timer_t* auto_click_timer = NULL;  // 定时器的全局指针
void auto_click_timer_cb(lv_timer_t * timer)
{
    // 检查目标控件是否处于已选中状态
    if (!lv_obj_has_state(ui_SwitchSpeak2, LV_STATE_CHECKED))
    {
        // 如果未选中状态，模拟点击将其状态改为已选中
        lv_obj_add_state(ui_SwitchSpeak2, LV_STATE_CHECKED);
    }
    // 模拟触发点击事件
    lv_event_send(ui_SwitchSpeak2, LV_EVENT_VALUE_CHANGED, NULL);
}

const lv_img_dsc_t *ui_imgset_chatgpt_[1] = {&ui_img_chatgpt_24_png};
const lv_img_dsc_t *ui_imgset_wifi[2] = {&ui_img_wifi1_png, &ui_img_wifi2_png};
const lv_img_dsc_t *ui_imgset_[1] = {&ui_img_123_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 0
#error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void Start_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -200, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
}

///////////////////// FUNCTIONS ////////////////////
void ui_event_ToSerial(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Serial, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Serial_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}
void ui_event_ToSet(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Set, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Set_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}
void ui_event_ToWeather(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Weather, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Weather_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}
void ui_event_ToMusic(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Music, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Music_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}
void ui_event_ToGPT(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_GPT, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_GPT_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}
void ui_event_ToGame(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Game, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Game_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}
void ui_event_ToCal(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Cal, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Cal_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}
void ui_event_ToAbout(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_About, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_About_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}
void ui_event_ToMove(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Move, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Move_screen_init);
        _ui_screen_delete(&ui_Main);
        mic_move_flag = true;
    }
}
void ui_event_SerialBackToMain(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Main_screen_init);
        _ui_screen_delete(&ui_Serial);
    }
}
const char *TextSerial = "\0";
void ui_event_TextSerial(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_state_modify(ui_KeyboardSerial, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
        _ui_flag_modify(ui_KeyboardSerial, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
    else if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        TextSerial = lv_textarea_get_text(target);
    }
}
void ui_event_KeyboardSerial(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CANCEL)
    {
        _ui_flag_modify(ui_KeyboardSerial, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}
void ui_event_SerialSend(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        printf("%s\r\n", TextSerial);
    }
}
void ui_event_SerialDelete(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_PRESSED || event_code == LV_EVENT_PRESSING)
    {
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
        lv_textarea_del_char(ui_TextSerialRx);
    }
}
char *rate_buf = "9600";
bool serial_flag = 0;
void ui_event_RateSelect(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        // lv_dropdown_get_selected_str( ui_RateSelect, rate_buf, 10);
        // serial_flag = 1;
    }
}
void ui_event_SetBackToMain(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Main_screen_init);
        _ui_screen_delete(&ui_Set);
    }
}
int ScreenLight;
void ui_event_SetLight(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        ScreenLight = lv_slider_get_value(target);
        _ui_slider_set_text_value(ui_LabelLightValue, target, "", "%");
        if (ScreenLight)
            analogWrite(16, ScreenLight * 2.55);
    }
}
void ui_event_OnOffWiFi(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        _ui_flag_modify(ui_PanelScanWiFi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
        if (lv_obj_is_visible(ui_PanelScanWiFi))
            wifi_scan_flag = 1;
        else
        {
            wifi_scan_flag = 0;
            wifi_button_flag = 1;
        }
    }
}
void ui_event_EnterPassword(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_PanelConnect, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
        lv_label_set_text_fmt(ui_LabelWiFiName, "%s", wifi_name);
        lv_label_set_long_mode(ui_LabelWiFiName, LV_LABEL_LONG_SCROLL_CIRCULAR);
    }
}
void ui_event_RollerGetWiFi(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        // 获取WiFi名字
        lv_roller_get_selected_str(ui_RollerWiFi, wifi_name, sizeof(wifi_name));
    }
}
void ui_event_KeyboardWiFi(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_READY)
    {
        _ui_flag_modify(ui_SpinnerWaitWiFi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
        _ui_flag_modify(ui_PanelConnect, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
        // 获取WiFi密码
        wifi_password = lv_textarea_get_text(ui_TextWiFiPassword);
        wifi_connect_flag = 1;
    }
    else if (event_code == LV_EVENT_CANCEL)
    {
        if (lv_keyboard_get_mode(target) == LV_KEYBOARD_MODE_NUMBER)
            lv_keyboard_set_mode(target, LV_KEYBOARD_MODE_TEXT_LOWER);
        else
            lv_keyboard_set_mode(target, LV_KEYBOARD_MODE_NUMBER);
    }
}
void ui_event_CancelEnter(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_PanelConnect, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}
void ui_event_UpdateWeather(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        if (isconnect)
            weather_flag = 1;
    }
}
void ui_event_WeatherBackToMain(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Main_screen_init);
        _ui_screen_delete(&ui_Weather);
    }
}
void ui_event_MusicBackToMain(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Main_screen_init);
        _ui_screen_delete(&ui_Music);
    }
}
void ui_event_RollerMusic(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        lv_roller_get_selected_str(ui_RollerMusic, songname, sizeof(songname));
    }
}
int voice = 10;
void ui_event_SliderVoice(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        voice = lv_slider_get_value(target);
    }
}
bool play_flag = 0;
void ui_event_StartMusic(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        if (lv_obj_has_state(target, LV_STATE_CHECKED))
            play_flag = 1;
        else
            play_flag = 0;
    }
}
bool start_flag = 0;
char songname[64];
void ui_event_ChangeMusic(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        if (event_code == LV_EVENT_CLICKED)
        {
            start_flag = 1;
            play_flag = 1;
            lv_obj_add_state(ui_StartMusic, LV_STATE_CHECKED);
            lv_roller_get_selected_str(ui_RollerMusic, songname, sizeof(songname));
        }
    }
}
void ui_event_GPTBackToMain(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Main_screen_init);
        _ui_screen_delete(&ui_GPT);
    }
}
void ui_event_SwitchSpeak(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        if (mic_flag == 0)
            if (lv_obj_has_state(target, LV_STATE_CHECKED))
            {
                mic_flag = 1;
                lv_textarea_set_text(ui_TextAreaQuestion, "你说，我在听...");
                lv_obj_add_state(target, LV_STATE_CHECKED | LV_STATE_DISABLED);
            }
        _ui_checked_set_text_value(ui_LabelGPTSwitch, target, "ON", "OFF");
    }
}
// void ui_event_SwitchSpeak2(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t *target = lv_event_get_target(e);
//     if (event_code == LV_EVENT_VALUE_CHANGED)
//     {
//         if (mic_flag == 0)
//             if (lv_obj_has_state(target, LV_STATE_CHECKED))
//             {
//                 mic_flag = 1;
//                 lv_textarea_set_text(ui_TextCommand, "你说，我在听...");
//                 lv_obj_add_state(target, LV_STATE_CHECKED | LV_STATE_DISABLED);
//             }
//         _ui_checked_set_text_value(ui_LabelGPTSwitch2, target, "ON", "OFF");
//     }
// }
void ui_event_SwitchSpeak2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    
    if (event_code == LV_EVENT_VALUE_CHANGED)
    {
        if (mic_flag == 0)
        {
            lv_textarea_set_text(ui_TextCommand, "你说，我在听...");
            if (lv_obj_has_state(target, LV_STATE_CHECKED))
            {
                mic_flag = 1;
                lv_textarea_set_text(ui_TextCommand, "你说，我在听...");
                lv_obj_add_state(target, LV_STATE_CHECKED | LV_STATE_DISABLED);

                // 创建定时器，每隔10秒自动触发一次
                if(auto_click_timer == NULL) // 如果定时器尚未创建
                {
                    auto_click_timer = lv_timer_create(auto_click_timer_cb, 15000, NULL); // 10000毫秒 = 10秒
                }
            }
        }

        _ui_checked_set_text_value(ui_LabelGPTSwitch2, target, "ON", "OFF");
    }
}

void ui_event_GameBackToMain(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Main_screen_init);
        _ui_screen_delete(&ui_Game);
    }
}
void ui_event_CalBackToMain(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Main_screen_init);
        _ui_screen_delete(&ui_Cal);
    }
}
void ui_event_AboutBackToMain(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Main_screen_init);
        _ui_screen_delete(&ui_About);
    }
}
void ui_event_MoveBackToMain(lv_event_t * e)
{
    if (auto_click_timer != NULL) {
        lv_timer_del(auto_click_timer);  // 删除定时器
        auto_click_timer = NULL;         // 重置定时器指针
    }
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Main, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_Main_screen_init);
        _ui_screen_delete(&ui_Move);
        mic_move_flag = false;

    }
}

void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        action = 5;
        move_flag = true;
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Main_screen_init();
    ui_Serial_screen_init();
    ui_Set_screen_init();
    ui_Weather_screen_init();
    ui_Music_screen_init();
    ui_GPT_screen_init();
    ui_Game_screen_init();
    ui_Cal_screen_init();
    ui_About_screen_init();
    ui_Move_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Main);
}

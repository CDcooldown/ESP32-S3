// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"
#include "Arduino.h"

void ui_Set_screen_init(void)
{
ui_Set = lv_obj_create(NULL);
lv_obj_add_event_cb(ui_Set, ui_event_ResetInactivity, LV_EVENT_ALL, NULL);
lv_obj_clear_flag( ui_Set, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Set, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Set, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SetBackToMain = lv_imgbtn_create(ui_Set);
lv_imgbtn_set_src(ui_SetBackToMain, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_123003138, NULL);
lv_imgbtn_set_src(ui_SetBackToMain, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_684857571, NULL);
lv_obj_set_height( ui_SetBackToMain, 38);
lv_obj_set_width( ui_SetBackToMain, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_SetBackToMain, 2 );
lv_obj_set_y( ui_SetBackToMain, 8 );

ui_PanelSetLight = lv_obj_create(ui_Set);
lv_obj_set_width( ui_PanelSetLight, 248);
lv_obj_set_height( ui_PanelSetLight, 48);
lv_obj_set_x( ui_PanelSetLight, -3 );
lv_obj_set_y( ui_PanelSetLight, -56 );
lv_obj_set_align( ui_PanelSetLight, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_PanelSetLight, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_border_color(ui_PanelSetLight, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_PanelSetLight, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_SetLight = lv_slider_create(ui_PanelSetLight);
lv_slider_set_value( ui_SetLight, 30, LV_ANIM_OFF);
analogWrite( 16,30*2.55);
if (lv_slider_get_mode(ui_SetLight)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_SetLight, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_SetLight, 148);
lv_obj_set_height( ui_SetLight, 15);
lv_obj_set_x( ui_SetLight, 31 );
lv_obj_set_y( ui_SetLight, 1 );
lv_obj_set_style_bg_color(ui_SetLight, lv_color_hex(0x8A8A8A), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SetLight, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_SetLight, lv_color_hex(0xD599FF), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SetLight, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_SetLight, lv_color_hex(0x8BF6FF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SetLight, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_LabelLightValue = lv_label_create(ui_PanelSetLight);
lv_obj_set_width( ui_LabelLightValue, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelLightValue, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelLightValue, 104 );
lv_obj_set_y( ui_LabelLightValue, -1 );
lv_obj_set_align( ui_LabelLightValue, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelLightValue,"30%");
lv_obj_set_style_text_font(ui_LabelLightValue, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelLight = lv_label_create(ui_PanelSetLight);
lv_obj_set_width( ui_LabelLight, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelLight, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelLight, -107 );
lv_obj_set_y( ui_LabelLight, -1 );
lv_obj_set_align( ui_LabelLight, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelLight,"亮度");
lv_obj_set_style_text_color(ui_LabelLight, lv_color_hex(0xF6A173), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelLight, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelLight, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_PanelWiFi = lv_obj_create(ui_Set);
lv_obj_set_width( ui_PanelWiFi, 306);
lv_obj_set_height( ui_PanelWiFi, 154);
lv_obj_set_x( ui_PanelWiFi, -1 );
lv_obj_set_y( ui_PanelWiFi, 36 );
lv_obj_set_align( ui_PanelWiFi, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_PanelWiFi, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_border_color(ui_PanelWiFi, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_PanelWiFi, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_PanelScanWiFi = lv_obj_create(ui_PanelWiFi);
lv_obj_set_width( ui_PanelScanWiFi, 300);
lv_obj_set_height( ui_PanelScanWiFi, 148);
lv_obj_set_x( ui_PanelScanWiFi, 4 );
lv_obj_set_y( ui_PanelScanWiFi, 4 );
lv_obj_set_align( ui_PanelScanWiFi, LV_ALIGN_CENTER );
//lv_obj_add_flag( ui_PanelScanWiFi, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_PanelScanWiFi, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_PanelScanWiFi, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_PanelScanWiFi, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_PanelScanWiFi, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_PanelScanWiFi, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_EnterPassword = lv_imgbtn_create(ui_PanelScanWiFi);
lv_imgbtn_set_src(ui_EnterPassword, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1164226509, NULL);
lv_imgbtn_set_src(ui_EnterPassword, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1065442945, NULL);
lv_obj_set_height( ui_EnterPassword, 48);
lv_obj_set_width( ui_EnterPassword, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_EnterPassword, 130 );
lv_obj_set_y( ui_EnterPassword, 13 );
lv_obj_set_align( ui_EnterPassword, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_EnterPassword, LV_OBJ_FLAG_HIDDEN );   /// Flags

ui_RollerWiFi = lv_roller_create(ui_PanelScanWiFi);
lv_roller_set_options( ui_RollerWiFi, "正在搜索可用的网络...", LV_ROLLER_MODE_NORMAL );
lv_obj_set_width( ui_RollerWiFi, 224);
lv_obj_set_height( ui_RollerWiFi, 114);
lv_obj_set_x( ui_RollerWiFi, -4 );
lv_obj_set_y( ui_RollerWiFi, 15 );
lv_obj_set_align( ui_RollerWiFi, LV_ALIGN_CENTER );
lv_obj_set_style_text_font(ui_RollerWiFi, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_RollerWiFi, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_RollerWiFi, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_RollerWiFi, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_RollerWiFi, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_RollerWiFi, lv_color_hex(0x4F4F4F), LV_PART_SELECTED | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_RollerWiFi, 255, LV_PART_SELECTED| LV_STATE_DEFAULT);

ui_ConnectStatus = lv_label_create(ui_PanelScanWiFi);
lv_obj_set_width( ui_ConnectStatus, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ConnectStatus, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ConnectStatus, 5 );
lv_obj_set_y( ui_ConnectStatus, -58 );
lv_obj_set_size( ui_ConnectStatus, 80, 20);
lv_obj_set_align( ui_ConnectStatus, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_ConnectStatus,LV_LABEL_LONG_SCROLL_CIRCULAR);
lv_label_set_text(ui_ConnectStatus,"已连接");
lv_obj_set_style_text_font(ui_ConnectStatus, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelWiFi = lv_label_create(ui_PanelWiFi);
lv_obj_set_width( ui_LabelWiFi, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelWiFi, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelWiFi, -107 );
lv_obj_set_y( ui_LabelWiFi, -53 );
lv_obj_set_align( ui_LabelWiFi, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelWiFi,"WiFi");
lv_obj_set_style_text_color(ui_LabelWiFi, lv_color_hex(0xF6A173), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelWiFi, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelWiFi, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_OnOffWiFi = lv_imgbtn_create(ui_PanelWiFi);
// lv_imgbtn_set_src(ui_OnOffWiFi, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_wifi1_png, NULL);
// lv_imgbtn_set_src(ui_OnOffWiFi, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_wifi1_png, NULL);
// lv_imgbtn_set_src(ui_OnOffWiFi, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_wifi2_png, NULL);
// lv_imgbtn_set_src(ui_OnOffWiFi, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_wifi2_png, NULL);
lv_imgbtn_set_src(ui_OnOffWiFi, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_wifi2_png, NULL);
lv_imgbtn_set_src(ui_OnOffWiFi, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_wifi2_png, NULL);
lv_imgbtn_set_src(ui_OnOffWiFi, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_wifi1_png, NULL);
lv_imgbtn_set_src(ui_OnOffWiFi, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_wifi1_png, NULL);
lv_obj_set_height( ui_OnOffWiFi, 42);
lv_obj_set_width( ui_OnOffWiFi, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_OnOffWiFi, 53 );
lv_obj_set_y( ui_OnOffWiFi, -9 );
lv_obj_add_flag( ui_OnOffWiFi, LV_OBJ_FLAG_CHECKABLE );   /// Flags

ui_SpinnerWaitWiFi = lv_spinner_create(ui_Set,1000,90);
lv_obj_set_width( ui_SpinnerWaitWiFi, 80);
lv_obj_set_height( ui_SpinnerWaitWiFi, 80);
lv_obj_set_align( ui_SpinnerWaitWiFi, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_SpinnerWaitWiFi, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_SpinnerWaitWiFi, LV_OBJ_FLAG_CLICKABLE );    /// Flags

ui_PanelConnect = lv_obj_create(ui_Set);
lv_obj_set_width( ui_PanelConnect, 310);
lv_obj_set_height( ui_PanelConnect, 227);
lv_obj_set_align( ui_PanelConnect, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_PanelConnect, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_clear_flag( ui_PanelConnect, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_PanelConnect, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_PanelConnect, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_PanelConnect, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_PanelConnect, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_KeyboardWiFi = lv_keyboard_create(ui_PanelConnect);
lv_obj_set_width( ui_KeyboardWiFi, 300);
lv_obj_set_height( ui_KeyboardWiFi, 121);
lv_obj_set_x( ui_KeyboardWiFi, -1 );
lv_obj_set_y( ui_KeyboardWiFi, 10 );
lv_obj_set_align( ui_KeyboardWiFi, LV_ALIGN_BOTTOM_MID );

ui_PanelPassword = lv_obj_create(ui_PanelConnect);
lv_obj_set_width( ui_PanelPassword, 213);
lv_obj_set_height( ui_PanelPassword, 82);
lv_obj_set_x( ui_PanelPassword, -4 );
lv_obj_set_y( ui_PanelPassword, -66 );
lv_obj_set_align( ui_PanelPassword, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_PanelPassword, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_TextWiFiPassword = lv_textarea_create(ui_PanelPassword);
lv_obj_set_width( ui_TextWiFiPassword, 192);
lv_obj_set_height( ui_TextWiFiPassword, LV_SIZE_CONTENT);   /// 43
lv_obj_set_x( ui_TextWiFiPassword, 1 );
lv_obj_set_y( ui_TextWiFiPassword, 7 );
lv_obj_set_align( ui_TextWiFiPassword, LV_ALIGN_CENTER );
lv_textarea_set_placeholder_text(ui_TextWiFiPassword,"Please enter password...");
lv_textarea_set_one_line(ui_TextWiFiPassword,true);
lv_textarea_set_password_mode(ui_TextWiFiPassword, false);

ui_LabelWiFiName = lv_label_create(ui_PanelPassword);
lv_obj_set_width( ui_LabelWiFiName, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelWiFiName, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelWiFiName, -7 );
lv_obj_set_y( ui_LabelWiFiName, -25 );
lv_obj_set_align( ui_LabelWiFiName, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelWiFiName,"WiFiName");
lv_obj_set_style_text_font(ui_LabelWiFiName, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_CancelEnter = lv_imgbtn_create(ui_PanelPassword);
lv_imgbtn_set_src(ui_CancelEnter, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_757343298, NULL);
lv_imgbtn_set_src(ui_CancelEnter, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1565204007, NULL);
lv_obj_set_height( ui_CancelEnter, 33);
lv_obj_set_width( ui_CancelEnter, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_CancelEnter, -92 );
lv_obj_set_y( ui_CancelEnter, -27 );
lv_obj_set_align( ui_CancelEnter, LV_ALIGN_CENTER );

lv_obj_add_event_cb(ui_SetBackToMain, ui_event_SetBackToMain, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_SetLight, ui_event_SetLight, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_OnOffWiFi, ui_event_OnOffWiFi, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_EnterPassword, ui_event_EnterPassword, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_RollerWiFi, ui_event_RollerGetWiFi, LV_EVENT_ALL, NULL);
lv_keyboard_set_textarea(ui_KeyboardWiFi,ui_TextWiFiPassword);
lv_obj_add_event_cb(ui_KeyboardWiFi, ui_event_KeyboardWiFi, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_CancelEnter, ui_event_CancelEnter, LV_EVENT_ALL, NULL);

}
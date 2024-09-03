// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"


void ui_Move_screen_init(void)
{
    lv_obj_add_event_cb(ui_Move, ui_event_ResetInactivity, LV_EVENT_CLICKED, NULL);
    ui_Move = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Move, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Move, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Move, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MoveBackToMain = lv_imgbtn_create(ui_Move);
    lv_imgbtn_set_src(ui_MoveBackToMain, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_123003138, NULL);
    lv_imgbtn_set_src(ui_MoveBackToMain, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_684857571, NULL);
    lv_obj_set_height(ui_MoveBackToMain, 48);
    lv_obj_set_width(ui_MoveBackToMain, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_MoveBackToMain, 8);
    lv_obj_set_y(ui_MoveBackToMain, 8);

    ui_Button1 = lv_btn_create(ui_Move);
    lv_obj_set_width(ui_Button1, 47);
    lv_obj_set_height(ui_Button1, 50);
    lv_obj_set_x(ui_Button1, -53);
    lv_obj_set_y(ui_Button1, -57);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);


    ui_SwitchSpeak2 = lv_switch_create(ui_Move);
    lv_obj_set_width(ui_SwitchSpeak2, 36);
    lv_obj_set_height(ui_SwitchSpeak2, 36);
    lv_obj_set_x(ui_SwitchSpeak2, 20);
    lv_obj_set_y(ui_SwitchSpeak2, 134);
    lv_obj_set_style_radius(ui_SwitchSpeak2, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SwitchSpeak2, lv_color_hex(0x636363), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SwitchSpeak2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_SwitchSpeak2, 30, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SwitchSpeak2, lv_color_hex(0xBBBBBB), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SwitchSpeak2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_LabelGPTSwitch2 = lv_label_create(ui_SwitchSpeak2);
    lv_obj_set_width(ui_LabelGPTSwitch2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelGPTSwitch2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelGPTSwitch2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelGPTSwitch2, "OFF");
    lv_obj_set_style_text_font(ui_LabelGPTSwitch2, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextCommand = lv_textarea_create(ui_Move);
    lv_obj_set_width(ui_TextCommand, 200);
    lv_obj_set_height(ui_TextCommand, 60);
    lv_obj_set_x(ui_TextCommand, 71);
    lv_obj_set_y(ui_TextCommand, 122);
    lv_textarea_set_text(ui_TextCommand, "主人，请给我指令~");
    lv_obj_set_style_text_font(ui_TextCommand, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TextCommand, lv_color_hex(0x8BF6FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TextCommand, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_MoveBackToMain, ui_event_MoveBackToMain, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SwitchSpeak2, ui_event_SwitchSpeak2, LV_EVENT_ALL, NULL);
}

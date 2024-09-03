// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_GPT_screen_init(void)
{
    lv_obj_add_event_cb(ui_GPT, ui_event_ResetInactivity, LV_EVENT_CLICKED, NULL);

ui_GPT = lv_obj_create(NULL);
lv_obj_clear_flag( ui_GPT, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_GPTBackToMain = lv_imgbtn_create(ui_GPT);
lv_imgbtn_set_src(ui_GPTBackToMain, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_123003138, NULL);
lv_imgbtn_set_src(ui_GPTBackToMain, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_684857571, NULL);
lv_obj_set_height( ui_GPTBackToMain, 64);
lv_obj_set_width( ui_GPTBackToMain, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_GPTBackToMain, 2 );
lv_obj_set_y( ui_GPTBackToMain, 8 );

ui_GPTQuestion = lv_btn_create(ui_GPT);
lv_obj_set_width( ui_GPTQuestion, 40);
lv_obj_set_height( ui_GPTQuestion, 40);
lv_obj_set_x( ui_GPTQuestion, -5 );
lv_obj_set_y( ui_GPTQuestion, 30 );
lv_obj_set_align( ui_GPTQuestion, LV_ALIGN_TOP_RIGHT );
lv_obj_add_flag( ui_GPTQuestion, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_GPTQuestion, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_GPTQuestion, 30, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_GPTQuestion, lv_color_hex(0x8CF6FB), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GPTQuestion, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelGPTQFace = lv_label_create(ui_GPTQuestion);
lv_obj_set_width( ui_LabelGPTQFace, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelGPTQFace, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LabelGPTQFace, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelGPTQFace,"^ ^");
lv_obj_set_style_text_color(ui_LabelGPTQFace, lv_color_hex(0x060606), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelGPTQFace, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TextAreaQuestion = lv_textarea_create(ui_GPT);
lv_obj_set_width( ui_TextAreaQuestion, 200);
lv_obj_set_height( ui_TextAreaQuestion, 60);
lv_obj_set_x( ui_TextAreaQuestion, 60 );
lv_obj_set_y( ui_TextAreaQuestion, 30 );
lv_textarea_set_text(ui_TextAreaQuestion,"你能做什么？");
lv_obj_set_style_text_font(ui_TextAreaQuestion, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_TextAreaQuestion, lv_color_hex(0x8BF6FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_TextAreaQuestion, 255, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_GPTAnswer = lv_btn_create(ui_GPT);
lv_obj_set_width( ui_GPTAnswer, 40);
lv_obj_set_height( ui_GPTAnswer, 40);
lv_obj_set_x( ui_GPTAnswer, 5 );
lv_obj_set_y( ui_GPTAnswer, 100 );
lv_obj_add_flag( ui_GPTAnswer, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_GPTAnswer, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_GPTAnswer, 30, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_GPTAnswer, lv_color_hex(0xD098FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GPTAnswer, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelGPTAFace = lv_label_create(ui_GPTAnswer);
lv_obj_set_width( ui_LabelGPTAFace, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelGPTAFace, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LabelGPTAFace, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelGPTAFace,"^ ^");
lv_obj_set_style_text_color(ui_LabelGPTAFace, lv_color_hex(0x0C0C0C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelGPTAFace, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TextAreaAnswer = lv_textarea_create(ui_GPT);
lv_obj_set_width( ui_TextAreaAnswer, 246);
lv_obj_set_height( ui_TextAreaAnswer, 131);
lv_obj_set_x( ui_TextAreaAnswer, 60 );
lv_obj_set_y( ui_TextAreaAnswer, 100 );
lv_textarea_set_text(ui_TextAreaAnswer,"我可以回答各种问题，提供建议，帮助解决问题，生成代码示例，进行翻译，进行文本分析，以及执行各种其他任务。无论是关于编程、学术、日常生活还是其他领域的问题，我都会尽力提供帮助和支持。");
lv_obj_set_style_text_font(ui_TextAreaAnswer, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_TextAreaAnswer, lv_color_hex(0xD599FF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_TextAreaAnswer, 255, LV_PART_MAIN| LV_STATE_DEFAULT);



ui_SwitchSpeak = lv_switch_create(ui_GPT);
lv_obj_set_width( ui_SwitchSpeak, 36);
lv_obj_set_height( ui_SwitchSpeak, 36);
lv_obj_set_x( ui_SwitchSpeak, 15 );
lv_obj_set_y( ui_SwitchSpeak, 40 );
lv_obj_set_style_radius(ui_SwitchSpeak, 50, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_SwitchSpeak, lv_color_hex(0x636363), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SwitchSpeak, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_SwitchSpeak, 30, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_SwitchSpeak, lv_color_hex(0xBBBBBB), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SwitchSpeak, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_LabelGPTSwitch = lv_label_create(ui_SwitchSpeak);
lv_obj_set_width( ui_LabelGPTSwitch, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelGPTSwitch, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LabelGPTSwitch, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelGPTSwitch,"OFF");
lv_obj_set_style_text_font(ui_LabelGPTSwitch, &ui_font_AlimamaShuHeiFont16Bpp4, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelNoWiFi = lv_label_create(ui_GPT);
lv_obj_set_width( ui_LabelNoWiFi, 220);
lv_obj_set_height( ui_LabelNoWiFi, 80);
lv_obj_set_align( ui_LabelNoWiFi, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelNoWiFi,"无网络,请连接网络后查看...");
lv_obj_add_flag( ui_LabelNoWiFi, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_set_style_text_font(ui_LabelNoWiFi, &ui_font_AlimamaFont32Bpp4, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_GPTBackToMain, ui_event_GPTBackToMain, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_SwitchSpeak, ui_event_SwitchSpeak, LV_EVENT_ALL, NULL);

}

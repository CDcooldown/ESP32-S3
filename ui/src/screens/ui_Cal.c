// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Cal_screen_init(void)
{
ui_Cal = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Cal, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_CalBackToMain = lv_imgbtn_create(ui_Cal);
lv_imgbtn_set_src(ui_CalBackToMain, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_123003138, NULL);
lv_imgbtn_set_src(ui_CalBackToMain, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_684857571, NULL);
lv_obj_set_height( ui_CalBackToMain, 48);
lv_obj_set_width( ui_CalBackToMain, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_CalBackToMain, 2 );
lv_obj_set_y( ui_CalBackToMain, 8 );

ui_Calendar = lv_calendar_create(ui_Cal);
lv_calendar_set_today_date(ui_Calendar,2024,4,13);
lv_calendar_set_showed_date(ui_Calendar,2024,4);
lv_obj_t *ui_Calendar_header = lv_calendar_header_arrow_create(ui_Calendar);
lv_obj_set_width( ui_Calendar, 281);
lv_obj_set_height( ui_Calendar, 196);
lv_obj_set_x( ui_Calendar, 0 );
lv_obj_set_y( ui_Calendar, 11 );
lv_obj_set_align( ui_Calendar, LV_ALIGN_CENTER );

lv_obj_add_event_cb(ui_CalBackToMain, ui_event_CalBackToMain, LV_EVENT_ALL, NULL);

}

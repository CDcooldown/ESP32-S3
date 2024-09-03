// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Game_screen_init(void)
{
    lv_obj_add_event_cb(ui_Game, ui_event_ResetInactivity, LV_EVENT_CLICKED, NULL);

ui_Game = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Game, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_GameBackToMain = lv_imgbtn_create(ui_Game);
lv_imgbtn_set_src(ui_GameBackToMain, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_123003138, NULL);
lv_imgbtn_set_src(ui_GameBackToMain, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_684857571, NULL);
lv_obj_set_height( ui_GameBackToMain, 48);
lv_obj_set_width( ui_GameBackToMain, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_GameBackToMain, 2 );
lv_obj_set_y( ui_GameBackToMain, 8 );

lv_obj_add_event_cb(ui_GameBackToMain, ui_event_GameBackToMain, LV_EVENT_ALL, NULL);

}

/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void screen_qs_on_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_add_flag(guider_ui.screen_qs_on, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(guider_ui.screen_qs_sync, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(guider_ui.screen_qs_wifi_sw, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(guider_ui.screen_qs_wifi, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(guider_ui.screen_qs_close, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void screen_qs_close_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        lv_obj_clear_flag(guider_ui.screen_qs_on, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(guider_ui.screen_qs_sync, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(guider_ui.screen_qs_wifi, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(guider_ui.screen_qs_wifi_sw, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(guider_ui.screen_qs_close, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

void events_init_screen (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_qs_on, screen_qs_on_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_qs_close, screen_qs_close_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}

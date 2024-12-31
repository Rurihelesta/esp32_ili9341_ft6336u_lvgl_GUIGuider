/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen(lv_ui *ui)
{
    //Write codes screen
    ui->screen = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen, 320, 240);
    lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_background
    ui->screen_background = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_background, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_background, &_02_alpha_320x240);
    lv_img_set_pivot(ui->screen_background, 50,50);
    lv_img_set_angle(ui->screen_background, 0);
    lv_obj_set_pos(ui->screen_background, 0, 0);
    lv_obj_set_size(ui->screen_background, 320, 240);

    //Write style for screen_background, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_background, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_background, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->screen_background, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_background, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_menu
    ui->screen_menu = lv_btn_create(ui->screen);
    ui->screen_menu_label = lv_label_create(ui->screen_menu);
    lv_label_set_text(ui->screen_menu_label, "MENU");
    lv_label_set_long_mode(ui->screen_menu_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_menu_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_menu, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_menu_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_menu, 4, 213);
    lv_obj_set_size(ui->screen_menu, 62, 23);

    //Write style for screen_menu, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_menu, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_menu, 164, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_menu, lv_color_hex(0x7ad9ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_menu, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_menu, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_menu, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_menu, &lv_font_Abel_regular_9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_menu, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_menu, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_qs_on
    ui->screen_qs_on = lv_btn_create(ui->screen);
    ui->screen_qs_on_label = lv_label_create(ui->screen_qs_on);
    lv_label_set_text(ui->screen_qs_on_label, "SETUP");
    lv_label_set_long_mode(ui->screen_qs_on_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_qs_on_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_qs_on, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_qs_on_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_qs_on, 254, 214);
    lv_obj_set_size(ui->screen_qs_on, 62, 23);

    //Write style for screen_qs_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_qs_on, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_qs_on, 164, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_qs_on, lv_color_hex(0x7ad9ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_qs_on, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_qs_on, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_qs_on, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_qs_on, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_qs_on, &lv_font_Abel_regular_9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_qs_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_qs_on, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_wifi_sta
    ui->screen_wifi_sta = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_wifi_sta, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_wifi_sta, &_wifiicon_alpha_20x20);
    lv_img_set_pivot(ui->screen_wifi_sta, 50,50);
    lv_img_set_angle(ui->screen_wifi_sta, 0);
    lv_obj_set_pos(ui->screen_wifi_sta, 297, 3);
    lv_obj_set_size(ui->screen_wifi_sta, 20, 20);

    //Write style for screen_wifi_sta, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_wifi_sta, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_wifi_sta, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui->screen_wifi_sta, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_wifi_sta, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_time
    ui->screen_time = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_time, "Label");
    lv_label_set_long_mode(ui->screen_time, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_time, 60, 21);
    lv_obj_set_size(ui->screen_time, 200, 48);

    //Write style for screen_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_time, &lv_font_montserratMedium_41, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_time, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_time, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_date
    ui->screen_date = lv_label_create(ui->screen);
    lv_label_set_text(ui->screen_date, "Label");
    lv_label_set_long_mode(ui->screen_date, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_date, 60, 195);
    lv_obj_set_size(ui->screen_date, 200, 48);

    //Write style for screen_date, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_date, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_date, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_date, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_date, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_date, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_qs_close
    ui->screen_qs_close = lv_btn_create(ui->screen);
    ui->screen_qs_close_label = lv_label_create(ui->screen_qs_close);
    lv_label_set_text(ui->screen_qs_close_label, "CLOSE");
    lv_label_set_long_mode(ui->screen_qs_close_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_qs_close_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_qs_close, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_qs_close_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_qs_close, 254, 214);
    lv_obj_set_size(ui->screen_qs_close, 63, 23);

    //Write style for screen_qs_close, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_qs_close, 164, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_qs_close, lv_color_hex(0xff406c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_qs_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_qs_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_qs_close, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_qs_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_qs_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_qs_close, &lv_font_montserratMedium_9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_qs_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_qs_close, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_qs_sync
    ui->screen_qs_sync = lv_btn_create(ui->screen);
    ui->screen_qs_sync_label = lv_label_create(ui->screen_qs_sync);
    lv_label_set_text(ui->screen_qs_sync_label, "SYNC");
    lv_label_set_long_mode(ui->screen_qs_sync_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_qs_sync_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_qs_sync, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_qs_sync_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_qs_sync, 264, 190);
    lv_obj_set_size(ui->screen_qs_sync, 52, 20);

    //Write style for screen_qs_sync, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_qs_sync, 164, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_qs_sync, lv_color_hex(0x7ad9ff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_qs_sync, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_qs_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_qs_sync, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_qs_sync, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_qs_sync, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_qs_sync, &lv_font_montserratMedium_9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_qs_sync, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_qs_sync, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_qs_wifi
    ui->screen_qs_wifi = lv_img_create(ui->screen);
    lv_obj_add_flag(ui->screen_qs_wifi, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_qs_wifi, &_wifiicon_alpha_20x20);
    lv_img_set_pivot(ui->screen_qs_wifi, 50,50);
    lv_img_set_angle(ui->screen_qs_wifi, 0);
    lv_obj_set_pos(ui->screen_qs_wifi, 254, 166);
    lv_obj_set_size(ui->screen_qs_wifi, 20, 20);

    //Write style for screen_qs_wifi, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_qs_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_qs_wifi, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_qs_wifi, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_qs_wifi, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_qs_wifi_sw
    ui->screen_qs_wifi_sw = lv_switch_create(ui->screen);
    lv_obj_set_pos(ui->screen_qs_wifi_sw, 276, 166);
    lv_obj_set_size(ui->screen_qs_wifi_sw, 40, 20);

    //Write style for screen_qs_wifi_sw, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_qs_wifi_sw, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_qs_wifi_sw, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_qs_wifi_sw, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_qs_wifi_sw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_qs_wifi_sw, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_qs_wifi_sw, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_qs_wifi_sw, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_qs_wifi_sw, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_qs_wifi_sw, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_qs_wifi_sw, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_qs_wifi_sw, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_qs_wifi_sw, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_qs_wifi_sw, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_qs_wifi_sw, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_qs_wifi_sw, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_qs_wifi_sw, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_qs_wifi_sw, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //The custom code of screen.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen);

    //Init events for screen.
    events_init_screen(ui);
}

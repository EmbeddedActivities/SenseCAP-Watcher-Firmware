// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.6
// Project name: SenseCAP-Watcher

#include "../ui.h"

void ui_Page_Swipe_screen_init(void)
{
    ui_Page_Swipe = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Page_Swipe, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Page_Swipe, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Page_Swipe, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_spsilder = lv_slider_create(ui_Page_Swipe);
    lv_slider_set_value(ui_spsilder, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_spsilder) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_spsilder, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_spsilder, 250);
    lv_obj_set_height(ui_spsilder, 15);
    lv_obj_set_align(ui_spsilder, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_spsilder, lv_color_hex(0xD47C2A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_spsilder, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_spsilder, lv_color_hex(0x0B0909), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_spsilder, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_spsilder, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_spsilder, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_spsilder, lv_color_hex(0xD47C2A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_spsilder, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_spsilder, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_spsilder, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_spsilder, lv_color_hex(0xD47C2A), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_spsilder, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_spsilder, lv_color_hex(0x000000), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_spsilder, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_spsilder, &ui_img_swipe_png, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_spsilder, lv_color_hex(0x000000), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_spsilder, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_spsilder, 1, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_spsilder, 10, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_spback = lv_btn_create(ui_Page_Swipe);
    lv_obj_set_width(ui_spback, 60);
    lv_obj_set_height(ui_spback, 60);
    lv_obj_set_x(ui_spback, 0);
    lv_obj_set_y(ui_spback, 120);
    lv_obj_set_align(ui_spback, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_spback, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_spback, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_spback, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_spback, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_spback, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_spback, &ui_img_button_cancel_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sptext = lv_label_create(ui_Page_Swipe);
    lv_obj_set_width(ui_sptext, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sptext, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_sptext, 0);
    lv_obj_set_y(ui_sptext, -100);
    lv_obj_set_align(ui_sptext, LV_ALIGN_CENTER);
    lv_label_set_text(ui_sptext, "Swipe to shut down");
    lv_obj_set_style_text_color(ui_sptext, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sptext, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sptext, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_swipep = lv_obj_create(ui_Page_Swipe);
    lv_obj_set_width(ui_swipep, 288);
    lv_obj_set_height(ui_swipep, 60);
    lv_obj_set_x(ui_swipep, 0);
    lv_obj_set_y(ui_swipep, -179);
    lv_obj_set_align(ui_swipep, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_swipep, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_swipep, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_swipep, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_swipep, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_swipep, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sptitle = lv_label_create(ui_swipep);
    lv_obj_set_width(ui_sptitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sptitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_sptitle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_sptitle, "Shut down");
    lv_obj_set_style_text_color(ui_sptitle, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sptitle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sptitle, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_swipep2 = lv_obj_create(ui_Page_Swipe);
    lv_obj_set_width(ui_swipep2, 412);
    lv_obj_set_height(ui_swipep2, 412);
    lv_obj_set_align(ui_swipep2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_swipep2, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_swipep2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_swipep2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_swipep2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_swipep2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_swipep2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sptext2 = lv_label_create(ui_swipep2);
    lv_obj_set_width(ui_sptext2, 311);
    lv_obj_set_height(ui_sptext2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_sptext2, 0);
    lv_obj_set_y(ui_sptext2, 25);
    lv_obj_set_align(ui_sptext2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_sptext2, "Factory reset in progress, please do not turn off the device...");
    lv_obj_set_style_text_color(ui_sptext2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sptext2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_sptext2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sptext2, &ui_font_fbold24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Spinner4 = lv_spinner_create(ui_swipep2, 1000, 90);
    lv_obj_set_width(ui_Spinner4, 50);
    lv_obj_set_height(ui_Spinner4, 50);
    lv_obj_set_x(ui_Spinner4, 0);
    lv_obj_set_y(ui_Spinner4, -76);
    lv_obj_set_align(ui_Spinner4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner4, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_arc_width(ui_Spinner4, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Spinner4, lv_color_hex(0xA1D42A), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Spinner4, 8, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_spsilder, ui_event_spsilder, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_spback, ui_event_spback, LV_EVENT_ALL, NULL);

}

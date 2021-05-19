#include "be_constobj.h"

static be_define_const_map_slots(m_liblvgl_map) {
    { be_const_key(SYMBOL_EYE_CLOSE, -1), be_const_str(&be_local_const_str_SYMBOL_EYE_CLOSE) },
    { be_const_key(SYMBOL_IMAGE, 15), be_const_str(&be_local_const_str_SYMBOL_IMAGE) },
    { be_const_key(SYMBOL_SETTINGS, 70), be_const_str(&be_local_const_str_SYMBOL_SETTINGS) },
    { be_const_key(SYMBOL_UPLOAD, -1), be_const_str(&be_local_const_str_SYMBOL_UPLOAD) },
    { be_const_key(SYMBOL_AUDIO, -1), be_const_str(&be_local_const_str_SYMBOL_AUDIO) },
    { be_const_key(SYMBOL_USB, -1), be_const_str(&be_local_const_str_SYMBOL_USB) },
    { be_const_key(SYMBOL_EDIT, -1), be_const_str(&be_local_const_str_SYMBOL_EDIT) },
    { be_const_key(SYMBOL_BELL, 2), be_const_str(&be_local_const_str_SYMBOL_BELL) },
    { be_const_key(SYMBOL_LOOP, -1), be_const_str(&be_local_const_str_SYMBOL_LOOP) },
    { be_const_key(SYMBOL_CALL, 16), be_const_str(&be_local_const_str_SYMBOL_CALL) },
    { be_const_key(SYMBOL_CUT, -1), be_const_str(&be_local_const_str_SYMBOL_CUT) },
    { be_const_key(SYMBOL_MUTE, -1), be_const_str(&be_local_const_str_SYMBOL_MUTE) },
    { be_const_key(SYMBOL_RIGHT, -1), be_const_str(&be_local_const_str_SYMBOL_RIGHT) },
    { be_const_key(SYMBOL_HOME, -1), be_const_str(&be_local_const_str_SYMBOL_HOME) },
    { be_const_key(SYMBOL_PREV, 54), be_const_str(&be_local_const_str_SYMBOL_PREV) },
    { be_const_key(SYMBOL_WIFI, 49), be_const_str(&be_local_const_str_SYMBOL_WIFI) },
    { be_const_key(SYMBOL_CLOSE, -1), be_const_str(&be_local_const_str_SYMBOL_CLOSE) },
    { be_const_key(SYMBOL_BLUETOOTH, -1), be_const_str(&be_local_const_str_SYMBOL_BLUETOOTH) },
    { be_const_key(SYMBOL_DUMMY, -1), be_const_str(&be_local_const_str_SYMBOL_DUMMY) },
    { be_const_key(SYMBOL_VIDEO, -1), be_const_str(&be_local_const_str_SYMBOL_VIDEO) },
    { be_const_key(SYMBOL_PAUSE, -1), be_const_str(&be_local_const_str_SYMBOL_PAUSE) },
    { be_const_key(SYMBOL_PASTE, 13), be_const_str(&be_local_const_str_SYMBOL_PASTE) },
    { be_const_key(SYMBOL_MINUS, -1), be_const_str(&be_local_const_str_SYMBOL_MINUS) },
    { be_const_key(SYMBOL_STOP, -1), be_const_str(&be_local_const_str_SYMBOL_STOP) },
    { be_const_key(get_hor_res, 12), be_const_func(lv0_get_hor_res) },
    { be_const_key(screenshot, 19), be_const_func(lv0_screenshot) },
    { be_const_key(SYMBOL_GPS, -1), be_const_str(&be_local_const_str_SYMBOL_GPS) },
    { be_const_key(SYMBOL_POWER, -1), be_const_str(&be_local_const_str_SYMBOL_POWER) },
    { be_const_key(SYMBOL_VOLUME_MID, 51), be_const_str(&be_local_const_str_SYMBOL_VOLUME_MID) },
    { be_const_key(SYMBOL_BATTERY_EMPTY, -1), be_const_str(&be_local_const_str_SYMBOL_BATTERY_EMPTY) },
    { be_const_key(SYMBOL_DRIVE, 61), be_const_str(&be_local_const_str_SYMBOL_DRIVE) },
    { be_const_key(SYMBOL_KEYBOARD, -1), be_const_str(&be_local_const_str_SYMBOL_KEYBOARD) },
    { be_const_key(load_freetype_font, -1), be_const_func(lv0_load_freetype_font) },
    { be_const_key(SYMBOL_REFRESH, 28), be_const_str(&be_local_const_str_SYMBOL_REFRESH) },
    { be_const_key(SYMBOL_BATTERY_2, 53), be_const_str(&be_local_const_str_SYMBOL_BATTERY_2) },
    { be_const_key(SYMBOL_NEW_LINE, -1), be_const_str(&be_local_const_str_SYMBOL_NEW_LINE) },
    { be_const_key(SYMBOL_SD_CARD, -1), be_const_str(&be_local_const_str_SYMBOL_SD_CARD) },
    { be_const_key(SYMBOL_VOLUME_MAX, -1), be_const_str(&be_local_const_str_SYMBOL_VOLUME_MAX) },
    { be_const_key(SYMBOL_PLUS, -1), be_const_str(&be_local_const_str_SYMBOL_PLUS) },
    { be_const_key(SYMBOL_EJECT, -1), be_const_str(&be_local_const_str_SYMBOL_EJECT) },
    { be_const_key(layer_sys, -1), be_const_func(lv0_layer_sys) },
    { be_const_key(SYMBOL_BATTERY_FULL, -1), be_const_str(&be_local_const_str_SYMBOL_BATTERY_FULL) },
    { be_const_key(SYMBOL_DOWNLOAD, 23), be_const_str(&be_local_const_str_SYMBOL_DOWNLOAD) },
    { be_const_key(load_font, -1), be_const_func(lv0_load_font) },
    { be_const_key(SYMBOL_EYE_OPEN, -1), be_const_str(&be_local_const_str_SYMBOL_EYE_OPEN) },
    { be_const_key(register_button_encoder, -1), be_const_func(lv0_register_button_encoder) },
    { be_const_key(SYMBOL_BULLET, 9), be_const_str(&be_local_const_str_SYMBOL_BULLET) },
    { be_const_key(start, 3), be_const_func(lv0_start) },
    { be_const_key(scr_act, 5), be_const_func(lv0_scr_act) },
    { be_const_key(SYMBOL_UP, -1), be_const_str(&be_local_const_str_SYMBOL_UP) },
    { be_const_key(SYMBOL_CHARGE, -1), be_const_str(&be_local_const_str_SYMBOL_CHARGE) },
    { be_const_key(seg7_font, -1), be_const_func(lv0_load_seg7_font) },
    { be_const_key(SYMBOL_PLAY, 17), be_const_str(&be_local_const_str_SYMBOL_PLAY) },
    { be_const_key(layer_top, -1), be_const_func(lv0_layer_top) },
    { be_const_key(SYMBOL_SAVE, -1), be_const_str(&be_local_const_str_SYMBOL_SAVE) },
    { be_const_key(SYMBOL_COPY, 1), be_const_str(&be_local_const_str_SYMBOL_COPY) },
    { be_const_key(get_ver_res, 48), be_const_func(lv0_get_ver_res) },
    { be_const_key(SYMBOL_DIRECTORY, -1), be_const_str(&be_local_const_str_SYMBOL_DIRECTORY) },
    { be_const_key(montserrat_font, -1), be_const_func(lv0_load_montserrat_font) },
    { be_const_key(SYMBOL_SHUFFLE, -1), be_const_str(&be_local_const_str_SYMBOL_SHUFFLE) },
    { be_const_key(SYMBOL_FILE, -1), be_const_str(&be_local_const_str_SYMBOL_FILE) },
    { be_const_key(SYMBOL_WARNING, -1), be_const_str(&be_local_const_str_SYMBOL_WARNING) },
    { be_const_key(SYMBOL_LIST, 45), be_const_str(&be_local_const_str_SYMBOL_LIST) },
    { be_const_key(SYMBOL_LEFT, -1), be_const_str(&be_local_const_str_SYMBOL_LEFT) },
    { be_const_key(SYMBOL_TRASH, -1), be_const_str(&be_local_const_str_SYMBOL_TRASH) },
    { be_const_key(SYMBOL_BACKSPACE, -1), be_const_str(&be_local_const_str_SYMBOL_BACKSPACE) },
    { be_const_key(SYMBOL_DOWN, -1), be_const_str(&be_local_const_str_SYMBOL_DOWN) },
    { be_const_key(member, -1), be_const_func(lv0_member) },
    { be_const_key(SYMBOL_OK, -1), be_const_str(&be_local_const_str_SYMBOL_OK) },
    { be_const_key(SYMBOL_BATTERY_3, -1), be_const_str(&be_local_const_str_SYMBOL_BATTERY_3) },
    { be_const_key(SYMBOL_NEXT, -1), be_const_str(&be_local_const_str_SYMBOL_NEXT) },
    { be_const_key(SYMBOL_BATTERY_1, 14), be_const_str(&be_local_const_str_SYMBOL_BATTERY_1) },
};

static be_define_const_map(
    m_liblvgl_map,
    72
);

static be_define_const_module(
    m_liblvgl,
    "lvgl"
);

BE_EXPORT_VARIABLE be_define_const_native_module(lvgl, NULL);
// Copyright 2023 Vino Rodrigues (@vinorodrigues)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "version.h"

enum layer_names {
    _BASE,
    _NL,
    _F1,
    _F2,
    _F3
};

enum {
    KC_VERSION = QK_KB_0,
    KC_SIRI,
    KC_SCREEN_SHOT,
    KC_TASK_VIEW,
    KC_FILE_EXPLORER,
    KC_CORTANA
};

#define KC_VRSN KC_VERSION
#define KC_SNAP KC_SCREEN_SHOT
#define KC_TASK KC_TASK_VIEW
#define KC_FLXP KC_FILE_EXPLORER
#define KC_CRTA KC_CORTANA

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_all(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,           KC_SNAP, KC_VOLD, KC_VOLU, KC_SIRI,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, _______, TG(_NL), KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_HOME, KC_UP,   KC_PGUP, KC_PPLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_LEFT, AP_FN,   KC_RGHT, _______,
        KC_LSFT, _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,      KC_UP,       KC_END,  KC_DOWN, KC_PGDN, KC_ENT,
        KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                             MO(_F1), MO(_F2),      KC_LEFT, KC_DOWN, KC_RGHT,     KC_INS,  KC_DEL, _______
    ),

    [_NL] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_P7,   KC_P8,   KC_P9,   _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          KC_P4,   KC_P5,   KC_P6,   _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     KC_P1,   KC_P2,   KC_P3,   _______,
        _______, _______, _______,                            _______,                            _______, _______,      _______, _______, _______,     KC_P0,   KC_PDOT, KC_PENT
    ),

    [_F1] = LAYOUT_all(
        _______, KC_BRID, KC_BRIU, KC_MCTL, KC_LPAD, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_F13,           KC_F14,  KC_F15,  KC_F16,  KC_F17,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NUM,  _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, _______, _______, _______,
        KC_RSFT, _______, QK_BOOT, EE_CLR,  _______, KC_VRSN, _______, NK_TOGG, _______, _______, _______, _______, KC_LSFT,      _______,     _______, _______, _______, _______,
        KC_RCTL, KC_RALT, KC_RGUI,                            _______,                            _______, MO(_F3),      _______, _______, _______,     _______, _______, _______
    ),

    [_F2] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, _______, _______, _______,
        KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_RSFT,      _______,     _______, _______, _______, _______,
        KC_LCTL, KC_LALT, KC_LGUI,                            _______,                            MO(_F3), _______,      _______, _______, _______,     _______, _______, _______
    ),

    [_F3] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,     _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______,      _______, _______, _______,     _______, _______, _______
    )
};

static bool __register_code_2(keyrecord_t *record, uint16_t data1, uint16_t data2) {
    if (record->event.pressed) {
        register_code(data1);
        register_code(data2);
    } else {
        unregister_code(data2);
        unregister_code(data1);
    }
    return false;  // Skip all further processing of this key
}

static bool __register_code_3(keyrecord_t *record, uint16_t data1, uint16_t data2, uint16_t data3) {
    if (record->event.pressed) {
        register_code(data1);
        register_code(data2);
        register_code(data3);
    } else {
        unregister_code(data3);
        unregister_code(data2);
        unregister_code(data1);
    }
    return false;  // Skip all further processing of this key
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_VERSION:
            if (record->event.pressed) {
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
            }
            break;

        // macOS
        case KC_SIRI: return __register_code_2(record, KC_LOPT, KC_SPACE); break;
        case KC_SCREEN_SHOT: return __register_code_3(record, KC_LSFT, KC_LCMD, KC_4); break;

        // Windows
        case KC_TASK_VIEW: return __register_code_2(record, KC_LWIN, KC_TAB); break;
        case KC_FILE_EXPLORER: return __register_code_2(record, KC_LWIN, KC_E); break;
        case KC_CORTANA: return __register_code_2(record, KC_LWIN, KC_C); break;

        default: break;
    }
    return true;
}

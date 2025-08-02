// Copyright 2023-2025 Richard Dawe (@richdawe)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#define LT2_SPC LT(2, KC_SPC)
#define LT3_ESC LT(3, KC_ESC)

enum my_keycodes {
	BL_ONLY = SAFE_RANGE // Turn on backlight LEDs only
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_60_iso( /* Base */
    LT3_ESC,  KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,\
    KC_TAB,   KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC,         \
    KC_CAPS,  KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,  KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS, KC_ENT, \
    KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,  KC_C,  KC_V,  KC_B,    KC_N,  KC_M,  KC_COMM,  KC_DOT,   KC_SLSH,           KC_RSFT,\
    KC_LCTL,  KC_LGUI,  KC_LALT,                       LT2_SPC,                         MO(1),    KC_RALT,  KC_APP,  KC_RCTL),

[1] = LAYOUT_60_iso( /* FN */
    KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL ,\
    _______,  _______,  KC_UP,    _______,  _______,  _______,  _______,  _______,  KC_PSCR,  KC_SCRL,  KC_PAUS,  KC_UP,    _______,          \
    _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGUP,  KC_LEFT,  KC_RGHT,  _______,  _______,\
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_END,   KC_PGDN,  KC_DOWN,            _______,\
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

[2] = LAYOUT_60_iso( /* FN2 */
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
    _______,  _______,  KC_PGUP,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGUP,  _______,          \
    _______,  KC_HOME,  KC_PGDN,  KC_END,   _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_END,   _______,  _______,\
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGDN,            _______,\
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

[3] = LAYOUT_60_iso( /* RGB and media controls */
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_DEL, \
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MPLY,  KC_MPRV,  KC_MNXT,          \
    KC_CAPS,  BL_ONLY,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
    _______,  RGB_TOG,  RGB_MOD,  RGB_RMOD, RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  RGB_M_P,  _______,            _______,
    QK_BOOT,  _______,  _______,                                _______,                                _______,  KC_MUTE,  KC_VOLD,  KC_VOLU),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BL_ONLY:
      if (record->event.pressed) {
        rgb_matrix_mode(RGB_MATRIX_CUSTOM_backlight_only);
      }
      return false;

    default:
      return true;
  }
}

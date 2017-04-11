/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "chowderboard.h"

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP(
  KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,       KC_O,   KC_P,       KC_MINS,    KC_BSPC,
  MO(1),    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,       KC_L,   KC_SCLN,    KC_QUOT,    KC_ENT,
  KC_LSFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,    KC_DOT, KC_SLSH,    KC_RSFT,
  ____,     KC_LCTL,    MO(2), KC_LGUI,     KC_SPC, MO(2),  KC_RALT,    ____ ),
[1] = KEYMAP(
  ____,     ____,   ____,   ____,   ____,   ____,   ____,   KC_P7,  KC_P8,      KC_P9,  KC_PPLS,    KC_PMNS,    ____,
  ____,     ____,   ____,   ____,   ____,   KC_LBRC,KC_RBRC,KC_P4,  KC_P5,      KC_P6,  KC_PAST,    KC_PEQL,    ____,
  ____,     ____,   ____,   ____,   ____,   ____,   KC_P0,  KC_P1,  KC_P2,      KC_P3,  KC_PSLS,    ____,
  ____,     ____,   ____,   ____,   ____,   ____,   ____,   ____ ),
[2] = KEYMAP(
  KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN, ____, ____,
  ____, KC_ESC, KC_VOLD, KC_VOLU, KC_MUTE, ____, KC_LEFT,    KC_DOWN,    KC_UP,    KC_RGHT,  KC_INS, KC_DEL,
  ____, KC_MENU, KC_MPRV, KC_MPLY, KC_MNXT, KC_HOME, KC_END,    KC_PGUP,    KC_PGDN,    ____, KC_BSLS, ____,
  ____,     ____,   ____,   ____,   ____,   ____,   ____,   ____ ),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}

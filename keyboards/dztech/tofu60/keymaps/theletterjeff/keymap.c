/* Copyright 2022 DZTECH <moyi4681@Live.cn>
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

#include QMK_KEYBOARD_H

enum layers{
    WIN_BASE,
    MAC_BASE,
    FN,
    MEDIA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [WIN_BASE] = LAYOUT_all(
        KC_ESC,                KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,    KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_GRV,        KC_BSLS,
        LT(FN, KC_TAB),        KC_Q,     KC_W,     KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,    KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPC,
        KC_LEFT_CTRL,          KC_A,     KC_S,     KC_D,    KC_F,     KC_G,     KC_H,     KC_J,    KC_K,  KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
        KC_LEFT_SHIFT,  XXXXXXX,  KC_Z,     KC_X,    KC_C,     KC_V,     KC_B,     KC_N,    KC_M,  KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  XXXXXXX,
        TG(FN),             KC_LWIN,  KC_LALT,  KC_SPC,  XXXXXXX,  KC_CAPS_LOCK,  TG(MAC_BASE),  TG(MEDIA)
    ),
    [MAC_BASE] = LAYOUT_all(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_RALT,
        _______,  KC_LOPT,  KC_LCMD,  _______,  _______,  _______,  _______,  _______
    ),
    [FN] = LAYOUT_all(
        XXXXXXX,  KC_F1,    KC_F2,    KC_F3,       KC_F4,         KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,   KC_F11,   KC_F12,   XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,     XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_DEL,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_HOME,     KC_END,        XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_PAGE_UP,  KC_PAGE_DOWN,  XXXXXXX,  KC_WWW_BACK,  KC_WWW_FORWARD,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,     XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX
    ),
     [MEDIA] = LAYOUT_all(
        XXXXXXX,  KC_BRID,  KC_BRIU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,  XXXXXXX,  XXXXXXX,
        XXXXXXX,          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,        XXXXXXX,            XXXXXXX,          XXXXXXX,
        XXXXXXX,          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,        XXXXXXX,            XXXXXXX,
        XXXXXXX,          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,        XXXXXXX,            XXXXXXX,          XXXXXXX,
        XXXXXXX,          XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  _______
    ),
};



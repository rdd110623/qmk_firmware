/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

// Define the 5 layers used by Keychron
enum layers{
    MAC_BASE,
    WIN_BASE,
    MAC_FN1,
    WIN_FN1,
    FN2,
};

// Home Row Mod Aliases
#define ESC_CTL  LCTL_T(KC_ESC)
#define A_GUI    LGUI_T(KC_A)
#define S_ALT    LALT_T(KC_S)
#define D_SFT    LSFT_T(KC_D)
#define F_CTL    LCTL_T(KC_F)
#define J_CTL    RCTL_T(KC_J)
#define K_SFT    RSFT_T(KC_K)
#define L_ALT    RALT_T(KC_L)
#define SCLN_GUI RGUI_T(KC_SCLN)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0: Mac Base Layer (Home Row Mods Applied)
    [MAC_BASE] = LAYOUT_69_ansi(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_INS,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        ESC_CTL, A_GUI,    S_ALT,    D_SFT,   F_CTL,   KC_G,              KC_H,    J_CTL,   K_SFT,   L_ALT,    SCLN_GUI, KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LOPTN, KC_LCMMD,          KC_SPC,           MO(MAC_FN1), MO(FN2),       KC_SPC,            KC_RCMMD,          KC_LEFT, KC_DOWN, KC_RGHT),

    // Layer 1: Windows Base Layer (Home Row Mods Applied)
    [WIN_BASE] = LAYOUT_69_ansi(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_INS,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        ESC_CTL, A_GUI,    S_ALT,    D_SFT,   F_CTL,   KC_G,              KC_H,    J_CTL,   K_SFT,   L_ALT,    SCLN_GUI, KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           MO(WIN_FN1), MO(FN2),       KC_SPC,            KC_RALT,           KC_LEFT, KC_DOWN, KC_RGHT),

    // Layer 2: Mac Fn/Media Layer
    [MAC_FN1] = LAYOUT_69_ansi(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_MCTL, KC_LPAD, RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          _______,
        _______, BT_HST1,  BT_HST2,  BT_HST3, _______, _______, _______,  _______, _______, _______, _______,  KC_INS,   KC_PGUP,  _______,          _______,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI,           _______, _______, _______, KC_SNAP,  KC_PGDN,  KC_END,   _______,          _______,
        _______,           RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

    // Layer 3: Windows Fn/Media Layer
    [WIN_FN1] = LAYOUT_69_ansi(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_TASK, KC_FILE, RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          _______,
        _______, BT_HST1,  BT_HST2,  BT_HST3, _______, _______, _______,  _______, _______, KC_APP,  KC_SCRL,  KC_INS,   KC_PGUP,  _______,          _______,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI,           _______, _______, _______, KC_PSCR,  KC_PGDN,  KC_END,   _______,          _______,
        _______,           RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

    // Layer 4: Deep Hardware Control Layer (RGB / Bluetooth Toggles)
    [FN2] = LAYOUT_69_ansi(
        KC_TILD, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,          _______,
        _______, _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, _______,  _______,  _______, _______, _______,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, BAT_LVL,  BAT_LVL, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______)
};
// clang-format on

// Map your encoder / rotary knob actions for all 5 layers
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = { { KC_VOLD, KC_VOLU } },
    [WIN_BASE] = { { KC_VOLD, KC_VOLU } },
    [MAC_FN1]  = { { RGB_VAD, RGB_VAI } },
    [WIN_FN1]  = { { RGB_VAD, RGB_VAI } },
    [FN2]      = { { KC_TRNS, KC_TRNS } },
};
#endif

// Apply your custom 100ms and 200ms timing logic per key
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ESC_CTL:
            return 100; // Fast 100ms trigger for Caps-Lock -> Esc/Ctrl replacement
            
        case A_GUI:
        case S_ALT:
        case D_SFT:
        case F_CTL:
        case J_CTL:
        case K_SFT:
        case L_ALT:
        case SCLN_GUI:
            return 200; // Standard 200ms trigger for Home Row Modifiers
            
        default:
            return TAPPING_TERM;
    }
}
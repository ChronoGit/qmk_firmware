/* Copyright 2021 ChronoGit
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
#include "keymap_bone.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _SHIFTLAYER,
    _M3,
    _M4,
    _GAME
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL,
    GAMEMODE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_GAME] = LAYOUT(
        //left
        KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5,
        KC_TAB, KC_T, KC_Q, KC_W, KC_E, KC_R,
        KC_LSHIFT, KC_G, KC_A, KC_S, KC_D, KC_F,
        KC_LGUI, KC_0, KC_Y, KC_X, KC_C, KC_V,
                    KC_LALT, KC_LCTRL,
                    KC_1, KC_Q, KC_SPACE, KC_3,
                                KC_LSHIFT, KC_4,

        //right
        KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
        KC_Z, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET,
        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE,
        KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH,
                    KC_RALT, KC_RCTRL,
        TG(_GAME), KC_F1, KC_F2, KC_F3,
        KC_F4, KC_F5
    ),

    [_M4] = LAYOUT(
        //left
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_NO, BN_UP, KC_NO, BN_BACKSPC, KC_NO,
        KC_TRNS, BN_LEFT, BN_DOWN, BN_RIGHT, BN_ENTR, KC_NO,
        KC_TRNS, TG(_GAME), KC_NO, KC_NO, KC_NO, KC_NO,
                        KC_TRNS, KC_TRNS,
        KC_TRNS, BN_LSHFT, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS,

        //right
        KC_NO, KC_NO, BN_NUM_DIV, BN_NUM_MULT, KC_NO, KC_NO,
        KC_NO, BN_NUM_7, BN_NUM_8, BN_NUM_9, BN_NUM_PLUS, BN_NUM_MINUS,
        KC_NO, BN_NUM_4, BN_NUM_5, BN_NUM_6, BN_NUM_COMM, BN_DOT,
        BN_COLON, BN_NUM_1, BN_NUM_2, BN_NUM_3, BN_SEMICOLON, KC_NO,
                    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, BN_RSHFT, KC_TRNS
    ),

    [_M3] = LAYOUT(
        //left
        KC_NO, KC_NO, BN_SQUARE, BN_PWRTHREE, KC_NO, KC_NO,
        KC_TRNS, KC_NO, BN_UNDRSCR, BN_LBR, BN_RBR, BN_HAT,
        KC_TRNS, BN_BACKSL, BN_SLASH, BN_LCURL, BN_RCURL, BN_ASTERISK,
        KC_TRNS, BN_HASH, BN_DOLL, BN_PIPE, BN_TILDE, BN_BACKTICK,
                        KC_TRNS, KC_TRNS,
        BN_SPC, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,

        //right
        KC_NO, KC_NO, BN_COMM, KC_NO, KC_NO, KC_NO,
        BN_EXCL, BN_LTRI, BN_RTRI, BN_EQUALS, BN_AMP, KC_NO,
        BN_QUEST, BN_LPAR, BN_RPAR, BN_MINS, BN_COLON, BN_AT,
        BN_PLUS, BN_PERC, BN_QUOT, BN_CHAR, BN_SEMICOLON, KC_NO,
                    KC_TRNS, KC_TRNS,
        KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, BN_SPC
    ),

    [_SHIFTLAYER] = LAYOUT(
        //left
        KC_NO, BN_CIRC, BN_PARAG, KC_NO, KC_NO, KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

        //right
        BN_DOLL, BN_EUR, KC_NO, KC_NO, BN_QUOT, BN_NUM_MINUS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [_BASE] = LAYOUT(
        //left
        BN_ACCE, BN_1, BN_2, BN_3, BN_4, BN_5,
        BN_ESC, BN_J, BN_D, BN_U, BN_A, BN_X,
        BN_SLCK, BN_C, BN_T, BN_I, BN_E, BN_O,
        BN_LGUI, BN_F, BN_V, BN_UE, BN_AE, BN_OE,
                        BN_ENTR, BN_BACKSPC,
        BN_SPC, LM(_SHIFTLAYER, MOD_LSFT), BN_LALT, MO(_M3), BN_LCTRL, MO(_M4),

        //right
        BN_6, BN_7, BN_8, BN_9, BN_0, BN_MINS,
        BN_P, BN_H, BN_L, BN_M, BN_W, BN_SS,
        BN_B, BN_N, BN_R, BN_S, BN_G, BN_Q,
        BN_Y, BN_Z, BN_COMM, BN_DOT, BN_K, KC_NO,
                    BN_BACKSPC, BN_ENTR,
        MO(_M4), BN_RCTRL, MO(_M3), BN_RALT, LM(_SHIFTLAYER, MOD_RSFT), BN_SPC
    ),

    /*
    [Scuffed QWERTY] = LAYOUT(
          // left hand
           KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,
           KC_GRV,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,
           KC_TAB,    KC_A,    KC_S,    KC_D,   KC_F,   KC_G,
           KC_LSHIFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
                               KC_TAB,  KC_BSPC,
                                       KC_SPC, KC_LSFT, KC_LCTRL, KC_LALT,
                                       KC_ENTER, KC_LALT,
        // right hand
                     KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
                     KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_EQL,
                     KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
                     KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT,
                                      KC_LBRC, KC_RBRC,
        KC_SPC, LT(_FN, KC_BSPC),
        CTL_T(KC_PGUP), KC_PGDN,
        KC_LALT, KC_LGUI),
    ),*/
    /*[_BASE] = LAYOUT(
        //left
        BN_CIRC, BN_1, BN_2, BN_3, BN_4, BN_5,
        KC_2, BN_X, BN_V, BN_L, BN_C, BN_W,
        BN_L3L, BN_U, BN_I, BN_A, BN_E, BN_O,
        BN_L4L, BN_UE, BN_OE, BN_AE, BN_P, BN_Z,
        KC_8, KC_6,
        KC_0, KC_8, KC_6, KC_4, KC_2, GAMEMODE,

        //right
        KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS,
        KC_K, KC_H, KC_G, KC_F, KC_Q, BN_SS,
        KC_S, KC_N, KC_R, KC_T, KC_D, KC_Y,
        KC_B, KC_M, KC_COMMA, KC_DOT, KC_J, KC_NO,
        KC_NO, KC_NO,
        KC_SPACE, KC_BSPC, KC_RAPC, KC_ENT, KC_RSPC, KC_RCPC
    ),*/
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
        case GAMEMODE:
            layer_move(_GAME);
            break;
    }
    return true;
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _SHIFTLAYER:
            oled_write_P(PSTR("Shifted\n"), false);
            break;
        case _M3:
            oled_write_P(PSTR("Ternary\n"), false);
            break;
        case _M4:
            oled_write_P(PSTR("Quaternary\n"), false);
            break;
        case _FN:
            oled_write_P(PSTR("FN\n"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("GAMING\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    oled_write_P(PSTR("By Chrono\n"), false);
}
#endif

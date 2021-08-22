/* Copyright 2016 Matthias Schmitt
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

#pragma once

#include "keymap.h"
#include "keymap_german.h"

// clang-format off

 /*
  * ┌───┬───┬───┬───┬───┬───┐                                    ┌───┬───┬───┬───┬───┬───┐
  * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │                                    │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
  * ├───┼───┼───┼───┼───┼───┤                                    ├───┼───┼───┼───┼───┼───┤
  * │ *e│ J │ D │ U │ A │ X │                                    │ P │ H │ L │ M │ W │ ß │
  * ├───┼───┼───┼───┼───┼───┤                                    ├───┼───┼───┼───┼───┼───┤
  * │ *s│ C │ T │ I │ E │ O │                                    │ B │ N │ R │ S │ G │ Q │
  * ├───┼───┼───┼───┼───┼───┤                                    ├───┼───┼───┼───┼───┼───┤
  * │ *w│ F │ V │ Ü │ Ä │ Ö │                                    │ Y │ Z │ , │ . │ K │   │
  * └───┴───┼───┼───┼───┴───┘                                    └───┴───┼───┼───┼───┴───┘
  *         │ Ê │ ^B│                                                    │^B │ Ê │
  *         └───┴───┘                                                    └───┴───┘
  *                  ┌───┬───┬───┬───┐                  ┌───┬───┬───┬───┐
  *                  │ 1 │ 2 │ 3 │ 4 │                  │ 1 │ 2 │ 3 │ 4 │
  *                  └───┴───┼───┼───┤                  ├───┼───┼───┴───┘
  *                          │ 3 │ 4 │                  │ 3 │ 4 │
  *                          └───┴───┘                  └───┴───┘
  *
  * ┌───┬───┬───┬───┬───┬───┐                                    ┌───┬───┬───┬───┬───┬───┐
  * │   │ ° │ § │   │   │   │                                    │ $ │ € │   │   │ " │ - │
  * ├───┼───┼───┼───┼───┼───┤                                    ├───┼───┼───┼───┼───┼───┤
  * │ *e│ J │ D │ U │ A │ X │                                    │ P │ H │ L │ M │ W │ ß │
  * ├───┼───┼───┼───┼───┼───┤                                    ├───┼───┼───┼───┼───┼───┤
  * │ *s│ C │ T │ I │ E │ O │                                    │ B │ N │ R │ S │ G │ Q │
  * ├───┼───┼───┼───┼───┼───┤                                    ├───┼───┼───┼───┼───┼───┤
  * │ *w│ F │ V │ Ü │ Ä │ Ö │                                    │ Y │ Z │ - │   │ K │   │
  * └───┴───┼───┼───┼───┴───┘                                    └───┴───┼───┼───┼───┴───┘
  *         │ Ê │ ^B│                                                    │^B │ Ê │
  *         └───┴───┘                                                    └───┴───┘
  *                  ┌───┬───┬───┬───┐                  ┌───┬───┬───┬───┐
  *                  │ 1 │ 2 │ 3 │ 4 │                  │ 1 │ 2 │ 3 │ 4 │
  *                  └───┴───┼───┼───┤                  ├───┼───┼───┴───┘
  *                          │ 3 │ 4 │                  │ 3 │ 4 │
  *                          └───┴───┘                  └───┴───┘
  *
  * ┌───┬───┬───┬───┬───┬───┐                                    ┌───┬───┬───┬───┬───┬───┐
  * │   │   │ ² │ ³ │   │   │                                    │   │   │ , │   │   │   │
  * ├───┼───┼───┼───┼───┼───┤                                    ├───┼───┼───┼───┼───┼───┤
  * │ *e│   │ _ │ [ │ ] │ ^ │                                    │ ! │ < │ > │ = │ & │   │
  * ├───┼───┼───┼───┼───┼───┤                                    ├───┼───┼───┼───┼───┼───┤
  * │ *s│ \ │ / │ { │ } │ * │                                    │ ? │ ( │ ) │ - │ : │ @ │
  * ├───┼───┼───┼───┼───┼───┤                                    ├───┼───┼───┼───┼───┼───┤
  * │ *w│ # │ $ │ | │ ~ │ ` │                                    │ + │ % │ " │ ' │ ; │   │
  * └───┴───┼───┼───┼───┴───┘                                    └───┴───┼───┼───┼───┴───┘
  *         │ Ê │ ^B│                                                    │^B │ Ê │
  *         └───┴───┘                                                    └───┴───┘
  *                  ┌───┬───┬───┬───┐                  ┌───┬───┬───┬───┐
  *                  │ 1 │ 2 │ 3 │ 4 │                  │ 1 │ 2 │ 3 │ 4 │
  *                  └───┴───┼───┼───┤                  ├───┼───┼───┴───┘
  *                          │ 3 │ 4 │                  │ 3 │ 4 │
  *                          └───┴───┘                  └───┴───┘
  *
  * ┌───┬───┬───┬───┬───┬───┐                                    ┌───┬───┬───┬───┬───┬───┐
  * │   │   │   │   │   │   │ U = Up                             │   │   │ / │ * │   │   │
  * ├───┼───┼───┼───┼───┼───┤ D = Down                           ├───┼───┼───┼───┼───┼───┤
  * │ *e│   │ U │   │^B │   │ L = Left                           │   │ 7 │ 8 │ 9 │ + │ - │
  * ├───┼───┼───┼───┼───┼───┤ R = Right                          ├───┼───┼───┼───┼───┼───┤
  * │ *s│ L │ D │ R │ Ê │   │^B = Backspace                      │   │ 4 │ 5 │ 6 │ , │ . │
  * ├───┼───┼───┼───┼───┼───┤ Ê = Enter                          ├───┼───┼───┼───┼───┼───┤
  * │ *w│ *g│   │   │   │   │ *g = Switch to Game Mode           │ : │ 1 │ 2 │ 3 │ ; │   │
  * └───┴───┼───┼───┼───┴───┘ *w = LGUI, Winkey                  └───┴───┼───┼───┼───┴───┘
  *         │   │   │         *e = Escape                                │   │   │
  *         └───┴───┘         *s = Scrolllock                            └───┴───┘
  *                  ┌───┬───┬───┬───┐                  ┌───┬───┬───┬───┐
  *                  │ 1 │ 2 │ 3 │ 4 │                  │ 1 │ 2 │ 3 │ 4 │
  *                  └───┴───┼───┼───┤                  ├───┼───┼───┴───┘
  *                          │ 3 │ 4 │                  │ 3 │ 4 │
  *                          └───┴───┘                  └───┴───┘
  *
  */
// Row 1
#define BN_ACCE DE_CIRC  // ^ (dead)
#define BN_1    DE_1    // 1
#define BN_2    DE_2    // 2
#define BN_3    DE_3    // 3
#define BN_4    DE_4    // 4
#define BN_5    DE_5    // 5
#define BN_6    DE_6    // 6
#define BN_7    DE_7    // 7
#define BN_8    DE_8    // 8
#define BN_9    DE_9    // 9
#define BN_0    DE_0    // 0
#define BN_MINS DE_MINS // -
// Row 2
#define BN_J    DE_J    // X
#define BN_D    DE_D    // V
#define BN_U    DE_U    // L
#define BN_A    DE_A    // C
#define BN_X    DE_X    // W
#define BN_P    DE_P    // K
#define BN_H    DE_H    // H
#define BN_L    DE_L    // G
#define BN_M    DE_M    // F
#define BN_W    DE_W    // Q
#define BN_SS   DE_SS // ß
// Row 3
#define BN_C    DE_C    // U
#define BN_T    DE_T    // I
#define BN_I    DE_I    // A
#define BN_E    DE_E    // E
#define BN_O    DE_O    // O
#define BN_B    DE_B    // S
#define BN_N    DE_N    // N
#define BN_R    DE_R    // R
#define BN_S    DE_S    // T
#define BN_G    DE_G // D
#define BN_Q    DE_Q // Y
// Row 4
#define BN_F    DE_F    // Ü
#define BN_V    DE_V    // Ö
#define BN_UE   DE_UE    // Ä
#define BN_AE   DE_AE    // P
#define BN_OE   DE_OE    // Z
#define BN_Y    DE_Y    // B
#define BN_Z    DE_Z    // M
#define BN_COMM DE_COMM // ,
#define BN_DOT  DE_DOT  // .
#define BN_K    DE_K // J


// M3
#define BN_SQUARE   DE_SUP2
#define BN_PWRTHREE DE_SUP3

#define BN_UNDRSCR  DE_UNDS
#define BN_LBR      DE_LBRC
#define BN_RBR      DE_RBRC
#define BN_HAT      DE_CIRC
#define BN_EXCL     DE_EXLM
#define BN_LTRI     DE_LABK
#define BN_RTRI     DE_RABK
#define BN_EQUALS   DE_EQL
#define BN_AMP      DE_AMPR

#define BN_BACKSL   DE_BSLS
#define BN_SLASH    DE_SLSH
#define BN_LCURL    DE_LCBR
#define BN_RCURL    DE_RCBR
#define BN_ASTERISK DE_ASTR
#define BN_QUEST    DE_QUES
#define BN_LPAR     DE_LPRN
#define BN_RPAR     DE_RPRN
#define BN_COLON    DE_COLN
#define BN_AT       DE_AT

#define BN_HASH       DE_HASH
#define BN_DOLL       DE_DLR
#define BN_PIPE       DE_PIPE
#define BN_TILDE      DE_TILD
#define BN_BACKTICK   DE_GRV
#define BN_PLUS       DE_PLUS
#define BN_PERC       DE_PERC
#define BN_QUOT       DE_DQUO
#define BN_CHAR       DE_QUOT
#define BN_SEMICOLON  DE_SCLN

// M4
#define BN_UP       KC_UP
#define BN_DOWN     KC_DOWN
#define BN_LEFT     KC_LEFT
#define BN_RIGHT    KC_RIGHT
#define BN_BACKSPC  KC_BSPACE
#define BN_ENTR     KC_ENTER
#define BN_SLCK     KC_SCROLLLOCK
#define BN_ESC      KC_ESCAPE
#define BN_SPC      KC_SPACE

#define BN_NUM_1      KC_KP_1
#define BN_NUM_2      KC_KP_2
#define BN_NUM_3      KC_KP_3
#define BN_NUM_4      KC_KP_4
#define BN_NUM_5      KC_KP_5
#define BN_NUM_6      KC_KP_6
#define BN_NUM_7      KC_KP_7
#define BN_NUM_8      KC_KP_8
#define BN_NUM_9      KC_KP_9
#define BN_NUM_PLUS   KC_KP_PLUS
#define BN_NUM_MINUS  KC_KP_MINUS
#define BN_NUM_MULT   KC_KP_ASTERISK
#define BN_NUM_DIV    KC_KP_SLASH
#define BN_NUM_COMM   KC_KP_DOT

// Thumb Cluster
#define BN_LSHFT  KC_LSHIFT
#define BN_LCTRL  KC_LCTRL
#define BN_LALT   KC_LALT
#define BN_LGUI   KC_LGUI
#define BN_RSHFT  KC_RSHIFT
#define BN_RCTRL  KC_RCTRL
#define BN_RALT   KC_RALT
#define BN_RGUI   KC_RGUI

#define BN_EUR    DE_EURO
#define BN_CIRC   DE_DEG
#define BN_PARAG  DE_SECT

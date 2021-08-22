/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define VENDOR_ID       0x0017
#define MANUFACTURER    Chrono
#define PRODUCT_ID      0x3536
#define DEVICE_VER      0x0001
#define PRODUCT         Dactyl-Manuform (5x6)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#define WS2812_SPI SPID1
#define WS2812_SPI_MOSI_PAL_MODE 5
//#define RGB_DI_PIN D3
//#define RGBLED_NUM 12
#define RGBLED_SPLIT { 32, 32 }
#define RGBLIGHT_LIMIT_VAL 200

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3


/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0
#define SPLIT_MODS_ENABLE
#define RGBLIGHT_SPLIT

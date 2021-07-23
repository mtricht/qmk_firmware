/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2017 F_YUUCHI
Copyright 2020 Ben Roesner (keycapsss.com)

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7983
#define PRODUCT_ID      0x4C4C // "LL"
#define DEVICE_VER      0x0100
#define MANUFACTURER    Keycapsss
#define PRODUCT         Lily58L

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define SOFT_SERIAL_PIN D2
// Doesnt compile without following line:
#define RGB_DI_PIN D3
#ifdef RGB_MATRIX_ENABLE
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    define RGBLED_NUM 58  // Number of LEDs
#    define RGB_MATRIX_SPLIT { 29, 29 }  	// (Optional) For split keyboards, the number of LEDs connected on each half. X = left, Y = Right.
#    define SPLIT_TRANSPORT_MIRROR  // If RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is enabled, you also will want to enable SPLIT_TRANSPORT_MIRROR
#endif


#ifdef RGBLIGHT_ENABLE
#   define RGBLED_NUM 58  // Total number of LEDs
#   define RGBLED_SPLIT { 29, 29 } // LEDs per side
#   define RGBLIGHT_SPLIT
#endif

#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODERS_PAD_A_RIGHT { F5 }
#define ENCODERS_PAD_B_RIGHT { F4 }

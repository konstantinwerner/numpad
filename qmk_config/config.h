/*
Copyright 2019 KW

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

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x9001
#define MANUFACTURER    KW
#define PRODUCT         NumPad
#define DESCRIPTION     Numpad with Encoders

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Combo */
#define	TAPPING_TERM	200

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

#define LED_DRIVER_COUNT		1
#define LED_DRIVER_LED_COUNT	22
#define LED_DRIVER_ADDR_1		0b1110100	// 0x74 // AD-Pin to GND

#define BACKLIGHT_LEVELS 		8

#ifdef SUBPROJECT_v1
    #include "v1/config.h"
#endif

#endif


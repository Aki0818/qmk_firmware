/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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
#define VENDOR_ID       0xCEEB
#define PRODUCT_ID      0x0007
#define DEVICE_VER      0x0001
#define MANUFACTURER    Springroll-FF
#define PRODUCT         C6Keypad
#define DESCRIPTION     C6Keypad

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 6

/* pin-out */
#define MATRIX_ROW_PINS { D2 }
#define MATRIX_COL_PINS { B4, B5, B6, D4, D3, D1 }
#define UNUSED_PINS

#define TAPPING_TERM 200


#endif

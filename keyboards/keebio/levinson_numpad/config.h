/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2018 Danny Nguyen <danny@keeb.io>

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

#endif

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x3146
#define DEVICE_VER      0x0300
#define MANUFACTURER    Keebio
#define PRODUCT         Levinson Numpad
#define DESCRIPTION     Numpad/Macropad from the right half of a Levinson V3

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 4
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { D4, B2, B3, B1 }
#define MATRIX_COL_PINS { F4, F7, D3, B5, B4, E6 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/*
Copyright 2020 Richard Sutherland

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

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 2

#define DIRECT_PINS {{ D1, D0 }}

#define ADNS9800_CS_PIN F7

#define MOUSE_EXTENDED_REPORT
#define POINTING_DEVICE_INVERT_X
//#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_ROTATION_90
//#define POINTING_DEVICE_ROTATION_180
//#define POINTING_DEVICE_ROTATION_270

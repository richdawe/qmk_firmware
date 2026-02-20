/*
Copyright 2021 Noah Kiser (contact@kiserdesigns.com)
Copyright 2026 Richard Dawe

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

#define LED0_PIN GP25
#define LED1_PIN GP26
#define LED2_PIN GP27

// flip the 0 to a 1 to go back to a regular caps lock indicator, or remove these 2 lines entirely to eliminate the caps lock indicator function

//#define RGB_DI_PIN GP3

// These RGB_MATRIX_* should not be needed anymore.
#define RGB_MATRIX_EFFECTS
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

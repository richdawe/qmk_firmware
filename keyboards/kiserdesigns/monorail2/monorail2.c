/*
Copyright 2021 Noah Kiser (contact@kiserdesigns.com)

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

#include "monorail2.h"

void matrix_init_kb(void) {
	matrix_init_user();
}

// Move this and matrix layout into keyboard.json like
// https://github.com/vial-kb/vial-qmk/blob/vial/keyboards/kiserdesigns/gyrovan/info.json
// https://docs.qmk.fm/reference_info_json#layouts

led_config_t g_led_config = { {

{ NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
{ NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
{ NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
{ NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
{ NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
}, {
	{ 224, 0 }, { 179, 0 }, { 134, 0 }, { 90, 0 }, { 45, 0 }, { 0, 0 },
	{ 0, 64 }, { 45, 64 }, { 90, 64 }, { 134, 64 }, { 179, 64 }, { 224, 64 }
}, {
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2
} };

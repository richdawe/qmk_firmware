// Copyright 2022 Takuya Urakawa @hsgw (dm9records.com, 5z6p.com)
// Copyright 2022 Richard Dawe
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* LED Settings */
#define LED_NUM 3
#define LED_PINS \
    { B6, B5, B4 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Longer delay on tap codes, so shifted ones work. */
#define TAP_CODE_DELAY 100

// Copyright 2023 Vino Rodrigues (@vinorodrigues)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

/* VIA keymap layers */
#ifdef DYNAMIC_KEYMAP_LAYER_COUNT
    #undef DYNAMIC_KEYMAP_LAYER_COUNT
#endif
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

/* Tap Code */
// #define TAPPING_TERM 100
// #define PERMISSIVE_HOLD
// #define TAP_CODE_DELAY 10

/* correct for over sensitive keys */
// #ifdef DEBOUNCE
//     #undef DEBOUNCE
// #endif
// #define DEBOUNCE 10

/* wear leveling */
#define WEAR_LEVELING_LOGICAL_SIZE 4096
#define WEAR_LEVELING_BACKING_SIZE 8192

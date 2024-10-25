/* (c) 2024 Vino Rodrigues */
/* SPDX-License-Identifier: GPL-3.0-or-later */

#pragma once

#define EXTERNAL_EEPROM_SPI_SLAVE_SELECT_PIN

#define VIAL_KEYBOARD_UID {0x00, 0x33, 0xFA, 0x80, 0xFE, 0x45, 0x49, 0xD9}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }

#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

// Sane Limits
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_COMBO_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#ifdef USE_I2CV1
    #error 1
#endif
#ifdef USE_I2CV2
    #error 2
#endif

#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _NUMPAD 0
#define _NAVPAD 1

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_NUMPAD] = LAYOUT_numpad(KC_ESC,  KC_TAB,  KC_BSPC, KC_DEL,
                                  TG(1),   KC_PSLS, KC_PAST, KC_PEQL,
                                  KC_P7,   KC_P8,   KC_P9,   KC_PMNS, 
                                  KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
                                  KC_P1,   KC_P2,   KC_P3,   KC_NO,
                                  MO(1),   KC_P0,   KC_PDOT, KC_PENT),

        [_NAVPAD] = LAYOUT_numpad(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                  KC_HOME, KC_UP,   KC_PGUP, KC_TRNS,
                                  KC_LEFT, KC_NO,   KC_RGHT, KC_TRNS,
                                  KC_END,  KC_DOWN, KC_PGDN, KC_TRNS,
                                  KC_TRNS, KC_INS,  KC_DEL,  KC_SPC)

};

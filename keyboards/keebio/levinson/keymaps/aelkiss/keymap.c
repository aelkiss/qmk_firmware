#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _NUMPAD 0
#define _NAVPAD 1

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_NUMPAD] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, MO(1), KC_P1, KC_P4, KC_P7, TG(1), KC_ESC, 
                                      KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_P0, KC_P2, KC_P5, KC_P8, KC_PSLS, KC_TAB, 
                                      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_PDOT, KC_P3, KC_P6, KC_P9, KC_PAST, KC_BSPC, 
                                      MO(5), KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_PENT, KC_NO, KC_PPLS, KC_PMNS, KC_PEQL, KC_DEL),

        [_NAVPAD] = LAYOUT_ortho_4x12(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_TRNS, KC_END, KC_LEFT, KC_HOME, KC_TRNS, KC_TRNS, KC_ESC,
                                       KC_A, KC_R, KC_S, KC_T, KC_D, KC_INS, KC_DOWN, KC_NO, KC_UP, KC_TRNS, KC_TRNS, KC_LSFT, 
                                       KC_Z, KC_X, KC_C, KC_V, KC_B, KC_DEL, KC_PGDN, KC_RGHT, KC_PGUP, KC_TRNS, KC_TRNS, 
                                       MO(5), KC_LCTL, KC_LALT, KC_LGUI, MO(3), KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

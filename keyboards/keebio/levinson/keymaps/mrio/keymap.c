#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _MACROPAD 0

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_MACROPAD] = LAYOUT_ortho_4x12(KC_NO,    KC_VOLU,  KC_MPLY,  KC_END,   KC_PGDN,  KC_RIGHT,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                        KC_NO,    KC_VOLD,  KC_MUTE,  KC_HOME,  KC_PGUP,  KC_DOWN,          KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                        KC_F2,    KC_F4,    KC_F6,    KC_F8,    KC_F10,   KC_UP,            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                        KC_F1,    KC_F3,    KC_F5,    KC_F7,    KC_F9,    KC_LEFT,          KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO)

};

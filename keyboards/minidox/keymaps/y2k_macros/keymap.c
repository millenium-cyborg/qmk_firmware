#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 *
 * ,----------------------------------.           ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |           |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |           |   H  |   J  |   K  |   L  |   ;  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |           |   N  |   M  |   ,  |   .  |   /  |
 * `----------------------------------'           `----------------------------------'
 *                  ,--------------------.    ,------,-------------.
 *                  | Ctrl | LOWER|      |    |      | RAISE| Shift|
 *                  `-------------| Space|    |BckSpc|------+------.
 *                                |      |    |      |
 *                                `------'    `------'
 */

// Using KC_F13 .. KC_F24

[_QWERTY] = LAYOUT_split_3x5_3( \
  _______,           KC_F14,  KC_F15,  KC_F16,  _______,         _______, _______, _______, _______, _______,    \
  LGUI(LCTL(KC_Z)),  KC_F17,  KC_F18,  KC_F19,  _______,         _______, _______, _______, _______, _______,    \
  RESET,             KC_F20,  KC_F21,  KC_F22,  _______,         _______, _______, _______, _______, _______,    \
                     _______, KC_F23,  MO(_LOWER),       _______, _______, _______                      \
),

[_LOWER] = LAYOUT_split_3x5_3( \
  _______,  KC_F14,  KC_F15,  KC_F16,  _______,         _______, _______, _______, _______, _______,    \
  KC_F13,   KC_F17,  KC_F18,  KC_F19,  _______,         _______, _______, _______, _______, _______,    \
  RESET,    KC_F20,  KC_F21,  KC_F22,  _______,         _______, _______, _______, _______, _______,    \
                     _______, KC_F24,  _______,         _______, _______, _______                       \
),

};

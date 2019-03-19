#include QMK_KEYBOARD_H

#define _MAIN 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT(
    KC_INS,  KC_HOME, KC_PGUP,
    KC_DELT, KC_END,  KC_PGDN
  )
};

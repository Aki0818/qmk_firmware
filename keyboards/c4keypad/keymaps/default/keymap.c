#include QMK_KEYBOARD_H

#define _MAIN 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT(
             KC_UP,
    KC_LEFT, KC_DOWN,  KC_RIGHT
  ),

  [_FN] = LAYOUT(
             KC_PGUP,
    KC_HOME, KC_PGDN,  KC_END
  )
};

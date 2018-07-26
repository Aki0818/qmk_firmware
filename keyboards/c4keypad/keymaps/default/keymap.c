#include QMK_KEYBOARD_H

enum process_combo_event {
  COMBO_MAIN2FN,
  COMBO_FN2MAIN,
};

const uint16_t PROGMEM comboMain2Fn[] = {KC_LEFT, KC_RIGHT, COMBO_END};
const uint16_t PROGMEM comboFn2Main[] = {KC_HOME, KC_END, COMBO_END};
combo_t key_combos[0] = {
    [COMBO_MAIN2FN] = COMBO_ACTION(comboMain2Fn),
    [COMBO_FN2MAIN] = COMBO_ACTION(comboFn2Main),
};

#define _MAIN 0
#define _FN 1

void process_combo_event(uint8_t combo_index, bool pressed) {
    switch(combo_index) {
    case COMBO_MAIN2FN:
        if (pressed) {
            layer_on(_FN);
        }
        break;
    case COMBO_FN2MAIN:
        if (pressed) {
            layer_off(_FN);
        }
        break;
    }
}

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

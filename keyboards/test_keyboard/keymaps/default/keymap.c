#include QMK_KEYBOARD_H
#include "print.h"
#include "i2c_master.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐
     * │ A │
     * └───┘
     */
    [0] = LAYOUT_ortho_1x1(
        KC_A
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  debug_mouse=true;

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
      i2c_init();
      i2c_start(0x2A, 20);
      print("hello world!");
      return true;
}

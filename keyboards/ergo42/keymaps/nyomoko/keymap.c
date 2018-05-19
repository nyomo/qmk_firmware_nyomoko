#include "ergo42.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * ,------------------------------------------------.   ,------------------------------------------------.
 * | GUI  |  ESC |   Q  |   W  |   E  |   R  |  T   |   |   Y  |   U  |   I  |   O  |   P  |  -   |Del/BS|
 * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
 * | Tab  |=>META|   A  |   S  |   D  |   F  |  G   |   |   H  |   J  |   K  |   L  |   ;  |  :   |Return|
 * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
 * | Alt  | Shift|   Z  |   X  |   C  |   V  |   B  |   |      |  N   |   M  |   ,  |   .  |   /  |  \   |
 * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
 * | Ctrl l  1   |   2  |   3  |   4  |   5  | Spc  |   | XFER |   6  |   7  |   8  |   9  |   0  |  @   |
 * `------------------------------------------------'   `------------------------------------------------'
 */

[BASE] = KEYMAP( \
  KC_ESC,KC_LGUI, KC_Q, KC_W, KC_E, KC_R   , KC_T  ,KC_Y   , KC_U, KC_I,     KC_O,     KC_P,    KC_MINS ,KC_BSPC ,\
  KC_TAB,MO(META), KC_A, KC_S, KC_D, KC_F   , KC_G  ,KC_H   , KC_J, KC_K,     KC_L,     KC_SCLN, KC_QUOT,KC_ENT ,\
  KC_LALT,KC_LSFT  , KC_Z, KC_X, KC_C, KC_V   , KC_B  ,KC_B   , KC_N, KC_M,     KC_COMM,  KC_DOT,   KC_SLSH, KC_JYEN,\
  KC_LCTRL,KC_1,KC_2, KC_3, KC_4, KC_5, KC_SPC ,KC_HENK, KC_6, KC_7 ,    KC_8,     KC_9,    KC_0,   KC_LBRC \
),

/* META
 * ,------------------------------------------------.   ,------------------------------------------------.
 * |      |      |   !  |   "  |   #  |   $  |  %   |   |  [   |  ]   |   {  |   }  |   ^  |   ~  | Del  |
 * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   | Left | Down |  Up  |Right |      |      |      |
 * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
 * | META |      |      |      |      |      |      |   |      |      |  [   |   ]  |  {   |  }   | F12  |
 * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
 * | Sft  |  F2  |  F3  |  F4  |  F5  |  F6  |  {   |   |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * `------------------------------------------------'   `------------------------------------------------'
 */

[META] = KEYMAP( \
  _______, _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_RBRC, KC_BSLS, S(KC_RBRC), S(KC_BSLS),KC_EQL,S(KC_EQL),KC_DEL, \
  _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX,   XXXXXXX,   _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN,    KC_PGUP,XXXXXXX,XXXXXXX ,KC_F11,KC_F12, \
  KC_F1  , KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,     KC_F10,    S(KC_RO)\
)
};


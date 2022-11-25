#include QMK_KEYBOARD_H
#include "deutsch.h"

//UNICODE DEFINITIONS
enum unicode_names {
  ATILDE
};
const uint32_t PROGMEM unicode_map[] = {s
  [ATILDE] = 0x00E3, // ã
};

//LAYER DECLARATIONS
enum {
  LAYER_0 =0,
  LAYER_1,
  LAYER_2,
  LAYER_3,
  LAYER_4
  };

//TAP DANCE DECLARATIONS
enum {
  Z_CTRL-Z
  W_CTRL-W
  X_CTRL-X
  V_CTRL-V
  C_CTRL-C
  SHIFT_CAPSLOCK
  M_MINUS
  N_PUNKT
  B_KOMMA
  Q_AT
  BACKSPACE_DEL
  E_EURO
  AUML
  UUML
  OUML
  SZLIG
};

//TAP DANCE DEFINITIONS
qk_tap_dance_action_t tap_dance_actions[] = {
  [Z_CTRL-Z] = ACTION_TAP_DANCE_DOUBLE(KC_Z, LCTL(KC_Z))
  [W_CTRL-W] = ACTION_TAP_DANCE_DOUBLE(KC_W, LCTL(KC_W))
  [X_CTRL-X] = ACTION_TAP_DANCE_DOUBLE(KC_X, LCTL(KC_X))
  [V_CTRL-V] = ACTION_TAP_DANCE_DOUBLE(KC_V, LCTL(KC_V))
  [C_CTRL-C] = ACTION_TAP_DANCE_DOUBLE(KC_C, LCTL(KC_C))
  [SHIFT_CAPSLOCK] = ACTION_TAP_DANCE_DOUBLE(KC_LSHIFT, KC_CAPSLOCK)
  [M_MINUS] = ACTION_TAP_DANCE_DOUBLE(KC_M, DE_MINS)
  [N_PUNKT] = ACTION_TAP_DANCE_DOUBLE(KC_N, DE_DOT)
  [B_KOMMA] = ACTION_TAP_DANCE_DOUBLE(KC_B, DE_COMM)
  [Q_AT] = ACTION_TAP_DANCE_DOUBLE(KC_Q, ALGR(KC_Q))
  [BACKSPACE_DEL] = ACTION_TAP_DANCE_DOUBLE(KC_BSPACE, KC_DEL)
  [E_EURO] = ACTION_TAP_DANCE_DOUBLE(KC_E, LALT(KC_E))
  [UUML] = ACTION_TAP_DANCE_DOUBLE(KC_U, DE_UE)
  [OUML] = ACTION_TAP_DANCE_DOUBLE(KC_O, DE_OE)
  [SZLIG] = ACTION_TAP_DANCE_DOUBLE(KC_S, DE_SS)
  [AUML] = ACTION_TAP_DANCE_FN()    
};

//LAYER DEFINITIONS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  //LETTERS
    [LAYER_0] = LAYOUT_ortho_3x10(
    TD(Q_AT), TD(W_CTRL-W), TD(E_EURO), KC_R, KC_T, DE_Z, TD(UUML), KC_I, TD(OUML), KC_P, 
    TD(AUML), TD(SZLIG), KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(ENTER_ESC),
    KC_Y, TD(X_CTRL-X), TD(C_CTRL-C), TD(V_CTRL-V), KC_SPACE, TD(BACKSPACE_DEL), TD(B_KOMMA), TD(N_PUNKT), TD(M_MINUS), TD(SHIFT_CAPSLOCK),
    ),
  
  //NUMBERS
    [LAYER_1] = LAYOUT_ortho_3x10(
    KC_F9, KC_F10, KC_F11, KC_F12, _______, _______, KC_7, KC_8, KC_9, KC_0, 
    KC_F5, KC_F6, KC_F7, KC_F8, _______, _______, KC_4, KC_5, KC_6, TD(ENTER_ESC),
    KC_F1, KC_F2, KC_F3, KC_F4, _______, TD(BACKSPACE_DEL), KC_1, KC_2, KC_3, KC_TAB,
  ),
  [LAYER_2] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  ),
  [LAYER_3] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  ),
  [LAYER_4] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  ),
};

#include QMK_KEYBOARD_H
#include "deutsch.h"
//#include "macros.h" # include if you want to use user defined macros

//TODO :
//MEHR SONDERZEICHEN
//COPY-PASTE AUF EINE TASTE
//ADD TRIPPLE TAPDANCE TO A FOR A WITH TILDE


//LAYERS
enum keyboard_layers { # these are the different layers ou can use
  _QWERTZ, # normal layer with most letters
  _TOOLS, # 
  _FUNC, # 
  _SONDER, # 
  _WCOPA, # 
};

//ABKÜRZUNGEN ZU LAYERN

#define ZSONDER LT(_SONDER,KC_Z) //
#define TTOOLS LT(_TOOLS,KC_T) //
#define WCOPA LT(_WCOPA,KC_W) //

// TAPDANCE NAMES
enum {
    QAT = 0,
    AAE,
    UUE,
    OOE,
    SS,
    BKOMMA,
    NPUNKT,
    MMINUS,
    EQLQST,
    SBS,
    CPSL,
    EEUR,
    BSPDEL

};

//TAPDANCE DEFINITIONEN

qk_tap_dance_action_t tap_dance_actions[] = {
// USER TAPDANCE TO ACCESS MORE LETTERS
    [QAT] = ACTION_TAP_DANCE_DOUBLE(KC_Q,ALGR(KC_Q)), // tapdance Q-at
    [AAE] = ACTION_TAP_DANCE_DOUBLE(KC_A,DE_AE), // tapdance A-Ä
    [UUE] = ACTION_TAP_DANCE_DOUBLE(KC_U,DE_UE), // tapdance U-Ü
    [OOE] = ACTION_TAP_DANCE_DOUBLE(KC_O,DE_OE), // tapdance O-Ö
    [SS] = ACTION_TAP_DANCE_DOUBLE(KC_S,DE_SS), // tapdance S-ß
    [BKOMMA] = ACTION_TAP_DANCE_DOUBLE(KC_B,DE_COMM), // tapdance B-comma
    [NPUNKT] = ACTION_TAP_DANCE_DOUBLE(KC_N,DE_DOT), // tapdance N-dot
    [MMINUS] = ACTION_TAP_DANCE_DOUBLE(KC_M,DE_MINS), // tapdance M-minus
    [EQLQST] = ACTION_TAP_DANCE_DOUBLE(DE_EQL,DE_QST), // tapdance equal-questionmark
    [SBS] = ACTION_TAP_DANCE_DOUBLE(DE_SLSH,DE_BSLS), // tapdance ???
    [CPSL] = ACTION_TAP_DANCE_DOUBLE(KC_LSHIFT,KC_CAPSLOCK), // tapdance leftshift-capslock
    [EEUR] = ACTION_TAP_DANCE_DOUBLE(KC_E,LALT(KC_E)), // tapdance E-euro
    [BSPDEL] = ACTION_TAP_DANCLE_DOUBLE(KC_BSPACE,KC_DEL), //tapdance BackSpace-Delete
};


//LAYER DEFINITIONEN

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  // LAYER 0 - LETTERS

  [_QWERTZ] = LAYOUT_ortho_3x10(
    TD(QAT), DE_W, TD(EEUR), DE_R, DE_T, DE_Z, TD(UUE), DE_I, TD(OOE), KC_P,
    TD(AAE), TD(SS), DE_D, DE_F, DE_G, DE_H, DE_J, DE_K, DE_L, KC_ENTER,
    ZSONDER,LT(_FUNC,KC_X),KC_C,KC_V,KC_SPACE, TD(BSPDEL),  TD(BKOMMA),TD(NPUNKT),TD(MMINUS), TD(CPSL)
  ),

// LAYER - TOOLS

  [_TOOLS] = LAYOUT_ortho_3x10(
    KC_VOLD,   KC_VOLU,   KC_MUTE,   _______,   _______,  _______,   _______,   _______,  _______,    RESET,
    BL_TOGG,   BL_INC,    KC_VOLU,   RGB_MOD ,  RGB_VAI,  RGB_HUI,   _______,   KC_UP,    _______,    _______,
    BL_BRTG,   BL_DEC,    KC_VOLD,   RGB_TOG,   RGB_VAD , RGB_HUD,   KC_LEFT,   KC_DOWN,  KC_RIGHT,   DE_ALGR
  ),
  
  // LAYER - FUNKTIONEN

    [_FUNC] = LAYOUT_ortho_3x10(
      KC_ESC,    _______,    KC_DEL,    KC_1,    KC_2,   KC_3,      KC_F1,    KC_F2,    KC_F3,    KC_F4,
      KC_TAB,    _______,   KC_0,   KC_4,    KC_5,    KC_6,      KC_F5,    KC_F6,    KC_F7,    KC_F8,
      KC_LCTRL,  _______, KC_LALT   ,   KC_7,    KC_8,    KC_9,      KC_F9,    KC_F10,   KC_F11,   KC_F12
    ),
  
  //LAYER - SONDERZEICHEN

    [_SONDER] = LAYOUT_ortho_3x10(
    DE_EXLM,    DE_DQOT,    DE_PARA,  DE_DLR ,    DE_PERC ,   DE_AMPR,    TD(SBS) ,   DE_LPRN,    DE_RPRN,    TD(EQLQST),
    DE_AT,       _______,       _______,     _______,        _______,    _______,     _______,     KC_UP,    _______,   _______,
    _______,    KC_COMM,       KC_DOT,     KC_MINUS,        _______,    _______,     KC_LEFT,   KC_DOWN,  KC_RIGHT,    KC_LSHIFT

    ),
  
  // LAYER  
  
    [_WCOPA] = LAYOUT_ortho_3x10(
      _______   ,_______    ,_______    ,_______,   _______,    _______   ,_______    ,_______    ,_______,   _______,
      _______   ,_______    ,_______    ,_______,   _______,    _______   ,_______    ,_______    ,_______,   _______,
      KC_LCTL   ,_______    ,_______    ,_______,   _______,    _______   ,_______    ,_______    ,_______,   _______
    ),
};

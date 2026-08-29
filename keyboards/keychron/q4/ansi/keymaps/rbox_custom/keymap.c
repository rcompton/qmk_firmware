#include QMK_KEYBOARD_H

enum custom_layers {
    _BL,
    _NAV,
    //_LIGHT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base Layer - Mac */
    [_BL] = LAYOUT_ansi_61(
        QK_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        MO(_NAV), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL,  KC_LOPT, KC_LCMD,                   KC_SPC,                                    KC_RALT, KC_RGUI, /*MO(_LIGHT)*/_______, KC_RCTL
    ),

    /* Navigation Layer (Activated by holding Caps Lock) */
    [_NAV] = LAYOUT_ansi_61(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        RM_TOGG, RM_NEXT, RM_VALU, RM_HUEU, RM_SATU, RM_SPDU, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RM_PREV, RM_VALD, RM_HUED, RM_SATD, RM_SPDD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______,
        _______, _______, _______,                   _______,                                   _______, _______, _______, _______
    ),

    /* Corrected LIGHT Layer */
    //[_LIGHT] = LAYOUT_ansi_61(
    //    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //    _______, RGB_MATRIX_TOGGLE, RGB_MATRIX_MODE_FORWARD, RGB_MATRIX_HUE_INC, RGB_MATRIX_HUE_DEC, RGB_MATRIX_SAT_INC, RGB_MATRIX_SAT_DEC, RGB_MATRIX_VAL_INC, RGB_MATRIX_VAL_DEC, RGB_MATRIX_SPD_INC, RGB_MATRIX_SPD_DEC, _______, _______, _______,
    //    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    //    _______, _______, _______,                   _______,                                   _______, _______, _______, _______
    //)
};

//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//    switch (keycode) {
//        case KC_RSFT:
//            if (record->event.pressed) {
//                // When Right Shift is pressed, set the whole board to white
//                rgb_matrix_set_color_all(255, 255, 255);
//            } else {
//                // When Right Shift is released, resume the last animation
//                rgb_matrix_enable_noeeprom();
//            }
//            break; // We're done with our custom action
//    }
//    // This is the crucial part:
//    // We return true so that QMK continues to process the key as a normal Right Shift.
//    return true;
//}

/*
 * GMMK 2 Keymap - Custom Navigation and Grave/Escape
 *
 * Features:
 *  - Caps Lock + HJKL: Arrow keys (Navigation Layer)
 *  - Esc:
 *      Tap: Escape
 *      Shift + Esc: Tilde (~)
 *      Ctrl + Shift + Esc: Grave (`)
 *
 *  - Right Alt:  Normal Right Alt functionality
 *  - Left Ctrl: Normal Left Ctrl functionality
 */

 #include QMK_KEYBOARD_H

 enum custom_layers {
     _BL,  // Base Layer
     _NAV, // Navigation Layer (activated by holding Caps Lock)
 };

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /* Base Layer */
     [_BL] = LAYOUT_65_ansi_blocker(
         QK_GESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
         KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
         MO(_NAV), KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT, KC_ENT,  KC_PGDN,
         KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,          KC_UP,   KC_END,
         KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                                    KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
     ),

     /* Navigation Layer */
     [_NAV] = LAYOUT_65_ansi_blocker(
         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
         _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, _______, _______, _______,          _______,
         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
         _______, _______, _______,                          _______,                                _______, _______, _______, _______, _______
     )
 };

 // No process_record_user needed!
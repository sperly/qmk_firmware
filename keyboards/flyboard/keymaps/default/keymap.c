#include "flyboard.h"
#include "keymap_swedish.h"

#define xxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(KC_F13, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, xxxxx, KC_F14, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, xxxxx, KC_F15, KC_LSFT, RGB_MOD, KC_S, KC_D, KC_F, KC_G, xxxxx, KC_F16, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_BTN1, KC_F17, KC_LCTL, KC_LGUI, KC_LALT, MO(1), KC_SPC, xxxxx, KC_LSFT),
                                                              [1] = LAYOUT(KC_F18, _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, xxxxx, KC_F19, _______, BL_INC, RGB_VAI, RGB_MOD, RGB_HUI, RGB_SAI, xxxxx, KC_F20, _______, BL_DEC, RGB_VAD, RGB_RMOD, RGB_HUD, RGB_SAD, xxxxx, KC_F21, _______, BL_TOGG, BL_BRTG, KC_CALC, _______, _______, KC_BTN1, KC_F22, _______, _______, _______, MO(0), KC_SPC, xxxxx, KC_LSFT),
                                                              [2] = LAYOUT(_______, _______, KC_BSLS, ALGR(KC_2), ALGR(KC_3), ALGR(KC_4), ALGR(KC_5), xxxxx, _______, _______, _______, _______, _______, _______, _______, xxxxx, _______, _______, UC(0x03B1), _______, _______, _______, _______, xxxxx, _______, _______, _______, _______, _______, _______, _______, KC_BTN1, _______, _______, _______, _______, MO(0), KC_SPC, xxxxx, KC_LSFT)

};

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(KC_F13, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, xxxxx, xxxxx, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_BSPC, KC_F14, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, xxxxx, xxxxx, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_F15, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, xxxxx, xxxxx, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_F16, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_BTN1, KC_BTN2, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NUHS, xxxxx, KC_F17, KC_LCTL, KC_LGUI, KC_LALT, MO(1), KC_SPC, xxxxx, KC_LSFT, KC_RALT, xxxxx, KC_SPC, MO(2), KC_RGUI, KC_RCTL, KC_RSFT, KC_PWR),
//                                                               [1] = LAYOUT(KC_F18, _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, xxxxx, xxxxx, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_F19, _______, BL_INC, RGB_VAI, RGB_MOD, RGB_HUI, RGB_SAI, xxxxx, xxxxx, KC_VOLD, KC_VOLU, KC_UP, _______, KC_PGUP, _______, _______, KC_F20, _______, BL_DEC, RGB_VAD, RGB_RMOD, RGB_HUD, RGB_SAD, xxxxx, xxxxx, KC_MPLY, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, _______, KC_F21, _______, BL_TOGG, BL_BRTG, KC_CALC, _______, _______, KC_BTN1, KC_BTN2, KC_MPRV, KC_MNXT, _______, KC_HOME, KC_END, KC_PLUS, xxxxx, KC_F22, _______, _______, _______, MO(0), KC_SPC, xxxxx, KC_LSFT, KC_RALT, xxxxx, KC_SPC, MO(2), _______, _______, _______, KC_SLEP),
//                                                               [2] = LAYOUT(_______, _______, KC_BSLS, ALGR(KC_2), ALGR(KC_3), ALGR(KC_4), ALGR(KC_5), xxxxx, xxxxx, UC(0x00A5), ALGR(KC_7), ALGR(KC_8), ALGR(KC_9), ALGR(KC_0), ALGR(KC_EQL), KC_DELETE, _______, _______, _______, _______, _______, _______, _______, xxxxx, xxxxx, _______, _______, _______, _______, _______, _______, ALGR(KC_RBRC), _______, _______, UC(0x03B1), _______, _______, _______, _______, xxxxx, xxxxx, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN2, _______, ALGR(KC_M), _______, _______, _______, KC_EQL, xxxxx, _______, _______, _______, _______, MO(0), KC_SPC, xxxxx, KC_LSFT, KC_RALT, xxxxx, KC_SPC, LT(1, KC_NO), _______, _______, _______, KC_SLEP)

// };

//
/* UC
    00BC ¼
    00BD ½
    00BE ¾
    00B0 °

    03B1 α
    03B2 β
    03B3 γ
    03BB λ
    03C4 τ
    03C0 π
    03C6 φ
    0394 Δ
    03A3 Σ
    03A9 Ω
*/

// void i2c_init(void) {
//     setPinInput(B8);  // Try releasing special pins for a short time
//     setPinInput(B7);
//     wait_ms(10);  // Wait for the release to happen

//     palSetPadMode(GPIOB, 8, PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN | PAL_STM32_PUPDR_PULLUP);  // Set B6 to I2C function
//     palSetPadMode(GPIOB, 7, PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN | PAL_STM32_PUPDR_PULLUP);  // Set B7 to I2C function
// }

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
//     // keyevent_t event = record->event;

//     switch (id) {}
//     return MACRO_NONE;
// }

// void matrix_init_user(void) {}

// void matrix_scan_user(void) {
//     static int i = 0;
//     if (i++ > 10000) {
//         print(".");
//         i = 0;
//     }
//     print(".");
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // switch (keycode) {
    //     case KC_A:
    //         if (record->event.pressed) {
    //             print("A pressed");
    //         } else {
    //             print("A released");
    //         }
    //         return true;  // Skip all further processing of this key
    //     default:
    //         print("Keycode");
    //         return true;  // Process all other keycodes normally
    // }
    return true;
}

// void led_set_user(uint8_t usb_led) {
//     if (usb_led & (1 << USB_LED_NUM_LOCK)) {
//     } else {
//     }

//     if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
//     } else {
//     }

//     if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
//     } else {
//     }

//     if (usb_led & (1 << USB_LED_COMPOSE)) {
//     } else {
//     }

//     if (usb_led & (1 << USB_LED_KANA)) {
//     } else {
//     }
// }

#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    oled_clear();
    // if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    //}

    // return rotation;
}

void oled_task_user(void) {
    // Host Keyboard Layer Status
    static const char helix_logo[] PROGMEM = {0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0};
    oled_write_P(helix_logo, false);
    oled_set_cursor(2, 4);
    oled_write("FlyBoard is Alive!", 0);
}

// switch (get_highest_layer(layer_state)) {
//         //     case _QWERTY:
//         //         oled_write_P(PSTR("Default\n"), false);
//         //         break;
//         //     case _FN:
//         //         oled_write_P(PSTR("FN\n"), false);
//         //         break;
//         //     case _ADJ:
//         //         oled_write_P(PSTR("ADJ\n"), false);
//         //         break;
//     default:
//         // Or use the write_ln shortcut over adding '\n' to the end of your string
//         oled_write_ln_P(PSTR("Undefined"), false);
// }

// Host Keyboard LED Status
// led_t led_state = host_keyboard_led_state();
// oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
// oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
// oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
//}
#endif

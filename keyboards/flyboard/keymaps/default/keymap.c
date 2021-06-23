#include "flyboard.h"
#define xxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_F13, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, xxxxx,                                    xxxxx, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_BSPC, 
        KC_F14, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, xxxxx,                                    xxxxx, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, 
        KC_F15, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, xxxxx,                                   xxxxx, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
        KC_F16, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_BTN1,                                 KC_BTN2, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NUHS, xxxxx, 
        KC_F17, KC_LCTL, KC_LGUI, KC_LALT, MO(1), KC_SPC, xxxxx, KC_LSFT,                 KC_RALT, xxxxx, KC_SPC, MO(2), KC_RGUI, KC_RCTL, KC_RSFT, KC_PWR
    ),
	[1] = LAYOUT(
        KC_F18, _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, xxxxx,                              xxxxx, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, 
        KC_F19, _______, BL_INC, RGB_VAI, RGB_MOD, RGB_HUI, RGB_SAI, xxxxx,                     xxxxx, KC_VOLD, KC_VOLU, KC_UP, _______, KC_PGUP, _______, _______, 
        KC_F20, _______, BL_DEC, RGB_VAD, RGB_RMOD, RGB_HUD, RGB_SAD, xxxxx,                    xxxxx, KC_MPLY, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, _______, 
        KC_F21, _______, BL_TOGG, BL_BRTG, KC_CALC, _______, _______, KC_BTN1,                  KC_BTN2, KC_MPRV, KC_MNXT, _______, KC_HOME, KC_END, KC_PLUS, xxxxx, 
        KC_F22, _______, _______, _______, MO(0), KC_SPC, xxxxx, KC_LSFT,                 KC_RALT, xxxxx, KC_SPC, MO(2), _______, _______, _______, KC_SLEP
    ),
	[2] = LAYOUT(
        _______, _______, KC_BSLS, ALGR(KC_2), ALGR(KC_3), ALGR(KC_4), ALGR(KC_5), xxxxx,     xxxxx, UC(0x00A5), ALGR(KC_7), ALGR(KC_8), ALGR(KC_9), ALGR(KC_0), ALGR(KC_EQL), KC_DELETE, 
        _______, _______, _______, _______, _______, _______, _______, xxxxx,                   xxxxx, _______, _______, _______, _______, _______, _______, ALGR(KC_RBRC), 
        _______, _______, UC(0x03B1), _______, _______, _______, _______, xxxxx,                   xxxxx, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, KC_BTN1,                 KC_BTN2, _______, ALGR(KC_M), _______, _______, _______, KC_EQL, xxxxx, 
        _______, _______, _______, _______, MO(0), KC_SPC, xxxxx, KC_LSFT,                KC_RALT, xxxxx, KC_SPC, LT(1,KC_NO), _______, _______, _______, KC_SLEP
        )

};

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




const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    // keyevent_t event = record->event;

    switch (id) {}
    return MACRO_NONE;
}

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

bool process_record_user(uint16_t keycode, keyrecord_t *record) { return true; }

void led_set_user(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_NUM_LOCK)) {
    } else {
    }

    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
    } else {
    }

    if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
    } else {
    }

    if (usb_led & (1 << USB_LED_COMPOSE)) {
    } else {
    }

    if (usb_led & (1 << USB_LED_KANA)) {
    } else {
    }
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
    //     case _QWERTY:
    //         oled_write_P(PSTR("Default\n"), false);
    //         break;
    //     case _FN:
    //         oled_write_P(PSTR("FN\n"), false);
    //         break;
    //     case _ADJ:
    //         oled_write_P(PSTR("ADJ\n"), false);
    //         break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}
#endif

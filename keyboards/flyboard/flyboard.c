#include "flyboard.h"

void matrix_init_kb(void) {
    // setPinOutput(CAPS_LOCK_LED_PIN);
    matrix_init_user();
}

// void eeconfig_init_kb(void) {
// #ifdef BACKLIGHT_ENABLE
//     backlight_enable();
//     backlight_level(3);
// #endif
//     eeconfig_update_kb(0);
//     eeconfig_init_user();
// }

// const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {{0, C1_1}, {0, C1_2}, {0, C1_3}, {0, C1_4}, {0, C1_5}, {0, C1_6}, {0, C1_7}, {0, C1_8}, {0, C2_1}, {0, C2_2}, {0, C2_3}, {0, C2_4}, {0, C2_5}, {0, C2_6}, {0, C2_7}, {0, C2_8}};

// led_config_t g_led_config = {{// Key Matrix to LED Index
//                               {5, 8, 9, 0},
//                               {15, 6, 7, 10},
//                               {4, 11, 13, 1},
//                               {3, 12, 14, 2}},
//                              {// LED Index to Physical Position
//                               {188, 16},
//                               {187, 48},
//                               {188, 16},
//                               {187, 48},
//                               {149, 64},
//                               {112, 64},
//                               {37, 48},
//                               {38, 16},
//                               {188, 16},
//                               {187, 48},
//                               {188, 16},
//                               {187, 48},
//                               {149, 64},
//                               {112, 64},
//                               {37, 48},
//                               {38, 16}},
//                              {// LED Index to Flag
//                               4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}};

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x6060
#define DEVICE_VER 0x0001
#define MANUFACTURER qmkbuilder
#define PRODUCT FlyBoard
#define DESCRIPTION ISO_Compact

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

#define SPLIT_HAND_PIN A8

#define OLED_DISPLAY_128X64

#define RGBLED_SPLIT \
    { 10, 10 }

/* key matrix pins */
#define MATRIX_ROW_PINS \
    { C13, H0, H1, A1, A2 }
#define MATRIX_COL_PINS \
    { A4, B0, B1, B2, B10, B11, B12, A8 }

#define MATRIX_ROW_PINS_RIGHT \
    { C13, H0, H1, A1, A2 }
#define MATRIX_COL_PINS_RIGHT \
    { A4, B0, B1, B2, B10, B11, B12, A8 }

#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* number of backlight levels */
/* #define BACKLIGHT_PIN B6 */
/* #ifdef BACKLIGHT_PIN */
#define LED_DRIVER_ADDR_1 0b1110100
#define LED_DRIVER_COUNT 1
#define LED_DRIVER_1_LED_TOTAL 16
#define DRIVER_LED_TOTAL (LED_DRIVER_1_LED_TOTAL)
#define BACKLIGHT_LEVELS 5
/* #endif */

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() (keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)))

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#define RGB_DI_PIN B15
#ifdef RGB_DI_PIN
#    define RGBLIGHT_ANIMATIONS
#    define RGBLED_NUM 20
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#endif

#define WS2812_TRST_US 80
#define WS2812_SPI SPID2            // default: SPID1
#define WS2812_SPI_MOSI_PAL_MODE 5  // MOSI pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
#define WS2812_SPI_SCK_PIN B13      // Required for F072, may be for others -- SCK pin, see the respective datasheet for the appropriate values for your MCU. default: unspecified
#define WS2812_SPI_SCK_PAL_MODE 5   // SCK pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 5
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB

#define SOFT_SERIAL_PIN A9  // USART TX pin
#define SELECT_SOFT_SERIAL_SPEED \
    2                               // or 0, 2, 3, 4, 5
                                    //  0: about 460800 baud
                                    //  1: about 230400 baud (default)
                                    //  2: about 115200 baud
                                    //  3: about 57600 baud
                                    //  4: about 38400 baud
                                    //  5: about 19200 baud
#define SERIAL_USART_DRIVER SD1     // USART driver of TX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_TIMEOUT \
    100  // USART driver timeout. default 100
         // #define SERIAL_USART_TX_PIN A9
         // #define SERIAL_USART_RX_PIN A10

/*
#ifdef PS2_USE_USART
#    define PS2_CLOCK_PORT PORTA
#    define PS2_CLOCK_PIN PINA
#    define PS2_CLOCK_DDR DDRA
#    define PS2_CLOCK_BIT 0
#    define PS2_DATA_PORT PORTA
#    define PS2_DATA_PIN PINA
#    define PS2_DATA_DDR DDRA
#    define PS2_DATA_BIT 3
*/
/* synchronous, odd parity, 1-bit stop, 8-bit data, sample at falling edge */
/* set DDR of CLOCK as input to be slave */
/*
#    define PS2_USART_INIT()                                                                         \
        do {                                                                                         \
            PS2_CLOCK_DDR &= ~(1 << PS2_CLOCK_BIT);                                                  \
            PS2_DATA_DDR &= ~(1 << PS2_DATA_BIT);                                                    \
            UCSR1C = ((1 << UMSEL10) | (3 << UPM10) | (0 << USBS1) | (3 << UCSZ10) | (0 << UCPOL1)); \
            UCSR1A = 0;                                                                              \
            UBRR1H = 0;                                                                              \
            UBRR1L = 0;                                                                              \
        } while (0)
#    define PS2_USART_RX_INT_ON()                    \
        do {                                         \
            UCSR1B = ((1 << RXCIE1) | (1 << RXEN1)); \
        } while (0)
#    define PS2_USART_RX_POLL_ON() \
        do {                       \
            UCSR1B = (1 << RXEN1); \
        } while (0)
#    define PS2_USART_OFF()                           \
        do {                                          \
            UCSR1C = 0;                               \
            UCSR1B &= ~((1 << RXEN1) | (1 << TXEN1)); \
        } while (0)
#    define PS2_USART_RX_READY (UCSR1A & (1 << RXC1))
#    define PS2_USART_RX_DATA UDR1
#    define PS2_USART_ERROR (UCSR1A & ((1 << FE1) | (1 << DOR1) | (1 << UPE1)))
#    define PS2_USART_RX_VECT USART1_RX_vect
#endif
*/

#endif

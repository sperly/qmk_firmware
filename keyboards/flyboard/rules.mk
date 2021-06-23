# MCU name
MCU = STM32L433

# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = full
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes         # Console for debug
COMMAND_ENABLE = yes         # Commands for debug and configuration
SLEEP_LED_ENABLE = yes       # Breathing sleep LED during USB suspend, do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
NKRO_ENABLE = yes           # USB Nkey Rollover, if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
LED_MATRIX_ENABLE = yes
LED_MATRIX_DRIVER = IS31FL3731
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
RGBLIGHT_DRIVER = WS2812

OLED_DRIVER_ENABLE = yes

BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
STENO_ENABLE = no
SPLIT_KEYBOARD = yes

SERIAL_DRIVER = usart
KEYBOARD_SHARED_EP = yes

UNICODE_ENABLE = yes

#Currently not working on STM32
#PS2_MOUSE_ENABLE = yes
#PS2_USE_USART = yes

WS2812_DRIVER = spi

OPT_DEFS += -DSTM32_DMA_REQUIRED=TRUE

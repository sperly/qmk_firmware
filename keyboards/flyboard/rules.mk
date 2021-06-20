# MCU name
MCU = STM32L433

# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = lite     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
SLEEP_LED_ENABLE = yes       # Breathing sleep LED during USB suspend, do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
NKRO_ENABLE = yes           # USB Nkey Rollover, if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = yes       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
STENO_ENABLE = no
SPLIT_KEYBOARD = yes

SERIAL_DRIVER = usart
KEYBOARD_SHARED_EP = yes

PS2_MOUSE_ENABLE = yes
PS2_USE_USART = yes

OPT_DEFS += -DSTM32_DMA_REQUIRED=TRUE

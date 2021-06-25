#pragma once

/* 'qmk chibios-confmigrate -i keyboards/flyboard/mcuconf.h -r platforms/chibios/GENERIC_STM32_L433XC/configs/mcuconf.h' */

#include_next <mcuconf.h>

#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 TRUE
#define STM32_I2C_USE_DMA FALSE

#undef STM32_SPI_USE_SPI1
#define STM32_SPI_USE_SPI1 TRUE

#undef STM32_SPI_USE_SPI2
#define STM32_SPI_USE_SPI2 TRUE

#undef STM32_ADC_USE_ADC1
#define STM32_ADC_USE_ADC1 TRUE

#undef STM32_PWM_USE_TIM1
#define STM32_PWM_USE_TIM1 TRUE

#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE

#undef STM32_TRNG_USE_RNG1
#define STM32_TRNG_USE_RNG1 TRUE

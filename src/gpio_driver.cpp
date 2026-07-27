// Auto-generated GPIO Driver Initialization by GitBed
#include "pin_config.h"

void init_gpio_ina_scl() {
    GPIO_InitTypeDef gpio_init = {0};
    gpio_init.Pin = INA_SCL_PIN;
    gpio_init.Mode = GPIO_MODE_OUTPUT_PP;
    gpio_init.Pull = GPIO_NOPULL;
    gpio_init.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOB, &gpio_init);
}

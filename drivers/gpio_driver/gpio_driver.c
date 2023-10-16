// #include <zephyr/device.h>

// #include <zephyr/drivers/gpio.h>
#include "gpio_driver.h"
#include <zephyr/types.h>

static int gpio_driver_init(void){
    int ret;

    return 0;
}
int state =0;

static void toggle_led_trong_filec(const struct gpio_dt_spec *nam){
    gpio_pin_toggle_dt(nam);
}
static const struct gpio_driver_api1 sample_gpio_driver_api = {
    .toggle = &toggle_led_trong_filec,
};
DEVICE_DT_DEFINE(DT_NODELABEL(gpio_driver), gpio_driver_init, NULL,
                          NULL,
                          NULL, POST_KERNEL,
                          99, &sample_gpio_driver_api);

#include <zephyr/device.h>
#include <gpio_driver.h>
#include <zephyr/kernel.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(main, LOG_LEVEL_DBG);
static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_NODELABEL(gpio_driver),gpios);
int main(void)
{
    // const struct device *gpio;

    // LOG_INF("Example greetings driver");

    // gpio = DEVICE_DT_GET(DT_NODELABEL(gpio_driver));
    // if (!device_is_ready(gpio_driver)) {
    //     LOG_ERR("Greetings not ready");
    //     return 0;
    // }
    while(1){
    k_msleep(3000);
    toggle_pin(&led);
    LOG_INF("Example greetings driver");
    }
    return 0;
}
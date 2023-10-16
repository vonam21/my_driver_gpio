#ifndef __GPIO_DRIVER_H__
#define __GPIO_DRIVER_H__
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
struct gpio_driver_api1{
    void (*toggle)(const struct gpio_dt_spec *nam);
    // void (*turn_on)(const struct device *dev);
    // void (*turn_off)(const struct device *dev);
};
__syscall void toggle_pin(const struct gpio_dt_spec *dev);
static inline void z_impl_toggle_pin(const struct gpio_dt_spec *dev)
{
    const struct gpio_driver_api1 *api = dev->port->api;
    api->toggle(dev);
}

#include <syscalls/gpio_driver.h>
#endif
zephyr_include_directories(.)
zephyr_library()
zephyr_library_sources_ifdef(CONFIG_CHOSEN_GPIO       gpio_driver.c)

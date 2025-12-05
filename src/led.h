#pragma once
#include "driver/gpio.h"

void led_init();

void led_set_disarmed();
void led_set_armed();
void led_set_alarm();

void led_set_exit_delay_level(int sec_left);

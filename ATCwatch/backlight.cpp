/*
 * Copyright (c) 2020 Aaron Christophel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "backlight.h"
#include "Arduino.h"
#include "pinout.h"

int backlight_brightness = 0;
int min_backlight_brightness = 1;
int max_backlight_brightness = 255;

void init_backlight() {
  pinMode(LCD_BACKLIGHT_PWM, OUTPUT);

  set_backlight(0);
}

void set_backlight() {
  set_backlight(backlight_brightness);
}

int get_backlight() {
  return backlight_brightness;
}

void set_backlight(int brightness) {
  if (brightness)backlight_brightness = brightness;
  analogWrite(LCD_BACKLIGHT_PWM,255-brightness);
  
}

void inc_backlight() {
  backlight_brightness+=16;
  if (backlight_brightness > max_backlight_brightness)backlight_brightness = min_backlight_brightness;
}

void dec_backlight() {
  backlight_brightness-=16;
  if (backlight_brightness < min_backlight_brightness)backlight_brightness = max_backlight_brightness;
}

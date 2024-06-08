/*
 * custom_os
 * Author: bonsall2004
 * Description:
 */
#pragma once
#include "stdint.h"
#include <display.h>

void putc_colour(char character, color_t color);
void putc(char character);
void puts(const char* message);
void printf(const char* fmt, ...);
void itoa(int value, char* str, int base);

extern const uint8_t fontdata[];

void clear_screen();
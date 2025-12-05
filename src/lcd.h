#pragma once

void lcd_init();

void lcd_clear();

void lcd_set_cursor(int col, int row);

void lcd_write_char(char c);

void lcd_write_string(const char* str);

void lcd_show_message(const char* msg);      
void lcd_show_countdown(int seconds_left);   

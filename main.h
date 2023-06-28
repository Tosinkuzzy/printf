/*
 * File: Main.h
 * Author: Team project
 */

#ifndef main_h
#define main_h

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct printHandler - Entry p
 * des: struct to choose the right function depending
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct check
{
	char c;
	int (*f)(va_list str);
} check;

int _printf(const char *format, ...);
int (*check(char c))(va_list str);
int _putchar(char c);
int print_puts(char *s);
int print_char(va_list ptr);
int print_str(va_list ptr);
int print_percent(va_list ptr);


#endif

/*
 * File: Main.h
 * Author: Team project
 */

#ifndef main_h
#define main_h

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - Entry p
 * des: struct containing flags to "turn on"
 * @add: flag for the '+' character
 * @space: flag for the ' ' character
 * @notation: flag for the '#' character
 */
typedef struct flags
{
	int add;
	int space;
	int notation;
} flags_t;

/**
 * struct printHandler - Entry p
 * des: struct to choose the right function depending
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

int _printf(const char *format, ...);
int print_addres(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
char *conversion(unsigned long int num, int base, int lower);
int get_flag(char s, flags_t *f);
int print_int(va_list l, flags_t *f);
int print_unsigned(va_list l, flags_t *f);
void print_number(int n);
int digit(int i);
int (*get_print(char s))(va_list, flags_t *);
int _putchar(char c);
int _puts(char *ptr);

#endif

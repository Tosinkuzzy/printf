#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdbool.h>


int _printf(const char *format, ...);
int _putchar(char c);
int handle_directive(char directive, va_list args, int *count);
int handle_binary_arg(va_list args);
int print_binary_arg(va_list args);
int print_integer_arg(va_list args);
int print_decimal_arg(va_list args);
int power_of_ten(int exponent);
int print_integer(int num);
int handle(const char *format, va_list args, int scan);
int print_string(char *ptr);
int print_integ(int i);

#endif /* MAIN_H_ */

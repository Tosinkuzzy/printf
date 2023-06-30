/*
 * File: printf.c
 * Author:
 */
#include "main.h"
/**
 * _printf - Entry point
 * @format: A ponter to the string to be printed.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
int num_arr;
va_list arr;
va_list arr_copy;
int (*fun_format)(va_list);
char f_indi;
char f_specifier;
int n = 0;
int scan = 0;
num_arr = get_format(format);
va_start(arr, format);
va_copy(arr_copy, arr);
while (n < num_arr)
{
f_indi = format[n];
f_specifier = format[n + 1];
if (f_indi == '%' && (f_specifier == 'c' ||
			f_specifier == 's' ||
			f_specifier == 'i' ||
			f_specifier == 'd' ||
			f_specifier == 'b' ||
			f_specifier == 'u' ||
			f_specifier == 'o'))
{
fun_format = get_format_func(f_specifier);
scan += fun_format(arr_copy);
n++;
}
else if (f_indi == '%' && num_arr == 1)
{
fun_format = get_format_func('@');
scan += fun_format(arr_copy);
}
else
{
scan += _putchar(f_indi);
}
n++;
}
va_end(arr);
return (scan);
}

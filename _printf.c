/*
 * File: Printf
 * Author: Team project
 */

#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <stdarg.h>
/**
 * _printf - Entry p
 * @format: Produces output accordingly
 * Des: function will call the get_print() function
 * that will determine which func to call.
 *
 * Return: formatted output string.
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int (*f)(va_list ptr);
	int i;

	va_start(ptr, format);
	i = 0;
	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	for (; *format; format++)
	{
		if (*format != '%')
		{
			i += _putchar(*format);
			continue;
		}
	format++;
	f = check_type(*format);
	i += f ? f(ptr) : _printf("%%%c", *format);
	}
	va_end(ptr);
	return (i);
}

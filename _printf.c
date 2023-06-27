/*
 * File: Printf
 * Author: Team project
 */

#include <stdio.h>
#include "main.h"
#include <limits.h>
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
int (*pf)(va_list, flags_t *);
const char *p;
flags_t flgs = {0, 0, 0}
reg count = 0;
va_start(args, format);

if (!format || (format[0] == '%' && !format[1]))
{
	return (-1);
}
if (format[0] == '%' && format[1] == ' ' && !format[2])
{
	return (-1);
}
for (p = format; *p; p++)
{
	if (*p == '%')
	{
		p++;
		if (*p == '%')
		{
			count += _putchar('%');
			continue;
		}
		while (get_flag(*p, &flags))
		{
			p++
		}
		pf = get_print(*p);
		count += (pf)
			? pf(arg, &flags)
			: _printf("%%%c", *p);
	}
	else
	count += _putchar(*p);
}
_putchar(-1);
va_end(arg);
return (count);
}

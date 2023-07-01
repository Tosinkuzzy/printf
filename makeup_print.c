/*
 * File: makeup_print.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * print_binary - Prints binary in an unsigned.
 * @num: Argument.
 *
 * Return: 0, 1 otherwise.
 */
void print_binary(unsigned int num)
{
	if (num > 1)
		print_binary(num / 2);

	putchar('0' + (num % 2));
}
/**
 * _printf - Prints string specifier.
 * @format: Argument.
 *
 * Return: 0, 1 otherwise.
 */
int _printf(const char *format, ...)
{
	int scan = 0;

	va_list args;

	va_start(args, format);

while (*format != '\0')
{
	if (*format == '%')
	{
		format++;

		switch (*format)
		{
			case 'c':
				{
				int scan = va_arg(args, int);

				putchar(scan);
				scan++;
				break;
				}
			case 's':
				{
				const char *str = va_arg(args, const char *);

				scan += fputs(str, stdout);
				break;
				}
			case 'd':
			case 'i':
				{
				int num = va_arg(args, int);

				scan += printf("%d", num);
				break;
				}
			case 'b':
				{
				unsigned int num = va_arg(args, unsigned int);

				print_binary(num);
				scan += sizeof(num) * 8;
				break;
				}
			case '%':
				{
				putchar('%');
				scan++;
				break;
				}
		}
	}
	else
	{
		putchar(*format);
		scan++;
	}
	format++;
}
va_end(args);

return (scan);
}

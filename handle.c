/*
 * File: handle.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * print_integer - Entry p
 * des: Print an integer
 * @i: integer
 *
 * Return: The number of characters printed
 */
int print_integer(int i)
{
	int pr = 0;

	if (i < 0)
	{
		pr += _putchar('-');
		i = -i;
	}
	if (i / 10)
		pr += print_integer(i / 10);
	pr += _putchar('0' + (i % 10));

	return (pr);
}

/**
 * handle - Entry p
 * des: handle format specifier
 * @format: Format
 * @args: arguments
 * @scan: characters
 *
 * Return: 0, 1 otherwise
 */
int handle(const char *format, va_list args, int scan)
{
	switch (*format)
	{
		case 'c':
			{
				int ch = va_arg(args, int);

				scan += putchar(ch);
				break;
			}
		case 's':
			scan += print_string(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			{
				int num = va_arg(args, int);

				scan += print_integer(num);
				break;
			}
		case '%':
			scan += putchar('%');
			break;
		default:
			scan += putchar('%');
			scan += putchar(*format);
			break;
	}

	return (scan);
}

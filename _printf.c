/*
 * File: _printf.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * print_string - Entry p
 * des: Print terminated string
 * @ptr: string
 *
 * Return: The number of characters printed
 */
int print_string(char *ptr)
{
	int str = 0;
	int j = 0;

	while (ptr[j] != '\0')
	{
		str += write(STDOUT_FILENO, &ptr[j], 1);
		j++;
	}

	return (str);
}

/**
 * _printf - Entry p
 * des: print implementation
 * @format: format
 *
 * Return: characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int scan = 0;

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
					int str = va_arg(args, int);

				scan += write(STDOUT_FILENO, &str, 1);
				break;
				}
			case 's':
				scan += print_string(va_arg(args, char *));
				break;
			case '%':
				scan += write(STDOUT_FILENO, "%", 1);
				break;
			default:
				scan += write(STDOUT_FILENO, "%", 1);
				scan += write(STDOUT_FILENO, format, 1);
				break;
		}
	}
	else
	{
		scan += write(STDOUT_FILENO, format, 1);
	}

	format++;
}
va_end(args);
return (scan);
}

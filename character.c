/*
 * File: character.c
 * Author: Team collaboration
 */
#include "main.h"
/**
 * print_char - Prints a character to the standard output.
 * @args: argument.
 *
 * Return: number of characters printed.
 */
int print_char(va_list args)
{
	char c;
	int scan = 0;

	c = va_arg(args, int);
	scan = _putchar(c);
	return (scan);
}
/**
 * print_string - Prints a given string.
 * @args: argument.
 *
 * Return: number of characters printed.
 */
int print_string(va_list args)
{
	char *s;
	int scan = 0;
	char *null = "(null)";

	s = va_arg(args, char *);
	if (s != NULL)
	{
		while (*s != '\0')
		{
			scan += _putchar(*s);
			s++;
		}
	}
	else
	{
		while (*null != '\0')
		{
			scan += _putchar(*null);
			null++;
		}
	}
	return (scan);
}
/**
 * print_percentage - Prints a percentage.
 * @args: argument.
 *
 * Return: number of characters printed.
 */
int print_percentage(va_list args)
{
	(void) args;

	_putchar('%');
	return (1);
}
/**
 * print_empty - Prints an empty char
 * @args: argument.
 *
 * Return: 0, 1 otherwise..
 */
int print_empty(va_list args)
{
	(void) args;

	_putchar('\0');
	return (-1);
}
/**
 * print_special - conversion specifier
 * @args: argument.
 *
 * Return: number of characters printed.
 */
int print_special(va_list args)
{
	char *s;
	int scan = 0;

	s = va_arg(args, char *);
	if (s != NULL)
	{
		while (*s != '\0')
		{
			scan += print_special_helper(*s);
			s++;
		}
	}
	else
		_printf("(null)");
	return (scan);
}

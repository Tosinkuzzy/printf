/*
 * File: alpha.c
 * Author: Team collaboration.
 */

#include "main.h"

/**
 * print_string - Entry p
 * des: loops through a string
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 *
 * Return: string printed
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - Entry p
 * des: prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 *
 * Return: number of char printed
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}

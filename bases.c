/*
 * File: bases.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * print_hex - Entry p
 * @l: va_list arg
 * @f: pointer to the struct flags that determines
 * Des: the function calls convert() which in turns converts the input
 * Return: the number of char printed
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = conversion(num, 16, 1);
	int count = 0;

	if (f->notation == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - Entry p
 * @l: va_list arg
 * @f: pointer to the struct that determines
 * Des: the function calls convert() which in turns converts the input
 * Return: the number of char printed
 */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = conversion(num, 16, 0);
	int count = 0;

	if (f->notation == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - Entry p
 * @l: va_list arg
 * @f: pointer to the struct that determines
 * Des: the function calls convert() which in turns converts the input
 * Return: the number of char printed
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = conversion(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - Entry p
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * Des: the function calls convert() which in turns converts the input
 * Return: the number of char printed
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = conversion(num, 8, 0);
	int count = 0;

	if (f->notation == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}

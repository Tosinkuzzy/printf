/*
 * File: andre.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * addres - Entry p
 * des:  prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 *
 * Return: number of char printed
 */
int addres(va_list l, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
	{
		return (_puts("(nil)"));
	}
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}

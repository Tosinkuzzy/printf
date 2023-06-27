/*
 * File: number.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * print_int - Entry p
 * des: prints an integer
 * @l: va_list of arg
 * @f: pointer to the struct flags determine
 * Return: number of char printed
 */
int print_int(va_list l, flags_t *f)
{
	int i = va_arg(l, int);
	int result = count_digit(n);

	if (f->space == 1 && f->add == 0 && n >= 0)
	{
		result += _putchar(' ');
	}
	if (f->add == 1 && n >= 0)
	{
		result += _putchar('+');
	}
	if (i <= 0)
	{
		result++;
	}
	print_number(i);
	return (result);
}

/**
 * unsign - Entry p
 * des: prints an unsigned integer
 * @l: va_list of arg
 * @f: pointer to the struct flags determining
 * Return: number of char printed
 */
int unsign(va_list l, flags_t *f)
{
	unsigned int i = va_arg(l, unsigned int);
	char *ptr = convert(i, 10, 0);

	(void)f;
	return (_puts(ptr));
}

/**
 * number - Entry p
 * des: helper function that loops through
 *
 * @n: integer to be printed
 */
void number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

/**
 * digit - Entry p
 * des: returns the number of digits in an integer
 * @i: integer
 * Return: number of digits
 */
int digit(int i)
{
	unsigned int i = 0;
	unsigned int ptr;

	if (i < 0)
	{
		ptr = i * -1;
	}
	else
		ptr = i;
	while (ptr != 0)
	{
		ptr /= 10;
		i++;
	}
	return (i);
}

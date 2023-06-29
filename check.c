/*
 * File: check.c
 * Author: Team collaboration
 */

#include "main.h"


/**
 * print_char_ter - Entry p
 * des: Prints a char
 * @types: List of arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: Width
 * @precision: specification
 * @size: specifier
 * Return: Number of chars printed
 */
int print_char_ter(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
/**
 * print_string_var - Entry p
 * des: Prints a string
 * @types: List of arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: width.
 * @precision: specification
 * @size: specifier
 * Return: Number of chars printed
 */
int print_string_var(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	int len = 0, n;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
if (str == NULL)
{
	str = "(null)";
	if (precision >= 6)
		str = "      ";
}

while (str[len] != '\0')
len++;

if (precision >= 0 && precision < len)
	len = precision;

if (width > len)
{
	if (flags & F_MINUS)
	{
		write(1, &str[0], len);
		for (n = width - len; n > 0; n--)
			write(1, " ", 1);
		return (width);
	}
	else
	{
		for (n = width - len; n > 0; n--)
			write(1, " ", 1);
		write(1, &str[0], len);
		return (width);
	}
}
return (write(1, str, len));
}
/**
 * print_percent_age - Entry p
 * des: Prints a percent sign
 * @types: List a of arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: width.
 * @precision: specification
 * @size: specifier
 * Return: Number of chars printed
 */
int print_percent_age(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}

/**
 * print_int_ger - Entry p
 * des: Print int
 * @types: List a of arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: width.
 * @precision: specification
 * @size: specifier
 * Return: Number of chars printed
 */
int print_int_ger(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int j = va_arg(types, long int);
	unsigned long int num;

	n = convert_size_number(n, size);

if (j == 0)
	buffer[i--] = '0';

buffer[BUFF_SIZE - 1] = '\0';
num = (unsigned long int)n;

if (j < 0)
{
	num = (unsigned long int)((-1) * j);
	is_negative = 1;
}

while (num > 0)
{
	buffer[i--] = (num % 10) + '0';
	num /= 10;
}
i++;

return (write_number(is_negative, i, buffer, flags, width, precision, size));
}

/**
 * print_binary_odds - Entry p
 * des: Prints an unsigned number
 * @types: List a of arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: width.
 * @precision: specification
 * @size: specifier
 * Return: Numbers of char printed.
 */
int print_binary_odds(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	unsigned int j, m, i, sum;
	unsigned int a[32];
	int count;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

j = va_arg(types, unsigned int);
m = 2147483648; /* (2 ^ 31) */
a[0] = j / m;
for (i = 1; i < 32; i++)
{
	m /= 2;
	a[i] = (n / m) % 2;
}
for (i = 0, sum = 0, count = 0; i < 32; i++)
{
	sum += a[i];
	if (sum || i == 31)
	{
		char z = '0' + a[i];

		write(1, &z, 1);
		count++;
	}
}
return (count);
}

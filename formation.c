/*
 * File: fomation.c
 * Author: Team collaboration
 */
#include "main.h"
/**
 * get_format_func - A pointer to a function.
 * @c: The string.
 *
 * Return: pointer to function that performs the corresponding.
 */
int (*get_format_func(char c))(va_list)
{
	char op_char[] = "cs%@idbuoXxS";
	int (*op_cod[])(va_list) = {
		print_char,
		print_string,
		print_percentage,
		print_empty,
		print_int,
		print_int,
		print_binary,
		print_unsigned_int,
		print_unsigned_oct,
		print_unsigned_hexU,
		print_unsigned_hexl,
		print_special
	};
	int j = 0;

	while (op_char[j] != '\0')
	{
		if (op_char[j] == c)
		{
			return (op_cod[j]);
		}
		j++;
	}
	return (NULL);
}
/**
 * get_format - Length of a format string.
 * @format: The string.
 *
 * Return: length, 0 otherwise.
 */
int get_format(const char * const format)
{
	if (format == NULL)
		return (0);
	return (strlen(format));
}
/**
 * check_spec - Valid format specifier.
 * @f_spec: The character.
 *
 * Return: 1, 0 otherwise.
 */
int check_spec(char f_spec)
{
	if ((f_spec == 'c' ||
		f_spec == 's' ||
		f_spec == '%' ||
		f_spec == 'i' ||
		f_spec == 'd' ||
		f_spec == 'b' ||
		f_spec == 'u' ||
		f_spec == 'o' ||
		f_spec == 'X' ||
		f_spec == 'x' ||
		f_spec == 'S'))
		return (1);
	return (0);
}
/**
 * print_int_helper - Print an integer used by other function.
 * @n: An integer.
 *
 * Return: number of characters printed.
 */
int print_int_helper(int n)
{
	int scan = 0;

	if (n == INT_MIN)
	{
		scan += _putchar('-');
		scan += print_int_helper(-(n / 10));
		scan += _putchar(-(n & 10) + '0');
	}
	else if (n < 0)
	{
		scan += _putchar('-');
		n = -n;
		scan += print_int_helper(n);
	}
	else if (n / 10)
	{
		scan += print_int_helper(n / 10);
		scan += _putchar(n % 10 + '0');
	}
	else
	{
		scan += _putchar(n + '0');
	}
	return (scan);
}
/**
 * print_binary_helper - Print binary representation.
 * @n: The unsigned integer.
 *
 * Return: number of characters printed.
 */
int print_binary_helper(unsigned int n)
{
	int scan = 0;

	if (n > 1)
		scan += print_binary_helper(n / 2);
	scan += _putchar((n & 2) + '0');
	return (scan);
}
/**
 * print_unsigned_helper - Prints an unsigmed integer.
 * @n: The unsigned integer.
 * @base: The base.
 * @lower_case: greater than 0.
 *
 * Return: number of characters printed.
 */
int print_unsigned_helper(unsigned int n, int base, int lower_case)
{
	int scan = 0;
	int i = 0;
	char hex;

	if (n >= (unsigned int) base)
	{
		scan += print_unsigned_helper((n / base), base, lower_case);
	}
	i = n % base;
	if (i < 10)
	{
		(void) lower_case;
		scan += _putchar(i + '0');
	}
	else
	{
		if (lower_case > 0)
			hex = 'A';
		else
			hex = 'a';
		scan += -putchar(i - 10 + hex);

		return (scan);
	}
	return (scan);
}

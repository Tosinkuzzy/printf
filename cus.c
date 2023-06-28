/*
 * File: cus.c
 * Author: Team collabroration
 */
#include "main.h"

/**
 * print_big - Entry p
 * des: Non printable characters (0 < ASCII value < 32 or >= 127) are
 * @l: va_list arg
 * @f: pointer to the struct flags that determines
 * Return: number of char printed
 */
int print_big(va_list l, flags_t *f)
{
	int i, count = 0;
	char *result;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
	{
		return (_puts("(null)"));
	}

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			result = conversion(s[i], 16, 0);
			if (!result[1])
				count += _putchar('0');
			count += _puts(result);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}

/**
 * print_reverse - Entry p
 * des: prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * Return: length of the printed string
 */
int print_reverse(va_list l, flags_t *f)
{
	int i = 0, ptr;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
	{
		s = "(null)";
	}

	while (s[i])
	{
		i++;
	}

	for (ptr = i - 1; ptr >= 0; ptr--)
	{
		_putchar(s[j]);
	}

	return (i);
}

/**
 * print_rot13 - Entry p
 * des: prints a string using rot13
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: length of the printed string
 */
int print_rot13(va_list l, flags_t *f)
{
	int i, ptr;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;

	for (ptr = 0; s[ptr]; ptr++)
	{
		if (s[ptr] < 'A' || (s[ptr] > 'Z' && s[ptr] < 'a') || s[ptr] > 'z')
			_putchar(s[ptr]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[ptr] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (ptr);
}

/**
 * print_percent - Entry p
 * des: prints a percent
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}

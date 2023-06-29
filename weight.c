/*
 * File: weight.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * get_width_numb - Entry p
 * des: Calculates the width
 * @format: formatted string
 * @i: arguments passed
 * @list: arguments.
 *
 * Return: width.
 */
int get_width_numb(const char *format, int *i, va_list list)
{
	int ptr;
	int width = 0;

	for (ptr = *i + 1; format[ptr] != '\0'; ptr++)
	{
		if (is_digit(format[ptr]))
		{
			width *= 10;
			width += format[ptr] - '0';
		}
		else if (format[ptr] == '*')
		{
			ptr++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = ptr - 1;
	return (width);
}

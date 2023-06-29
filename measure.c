/*
 * File: measure.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * get_size_number - Entry p
 * des: Calculates the size to cast the argument
 * @format: Formatted string
 * @i: arguments passed
 *
 * Return: Precision.
 */
int get_size_number(const char *format, int *i)
{
	int ptr = *i + 1;
	int size = 0;

	if (format[ptr] == 'l')
		size = S_LONG;
	else if (format[ptr] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = ptr - 1;
	else
		*i = ptr;

	return (size);
}

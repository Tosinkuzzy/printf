/*
 * File: print_puts.c
 * Author: Team collaboration
 */

#include "main.h"

/**
 * get_flags_ize - Entry p
 * des: Calculates active flags
 * @format: formatted string
 * @i: param
 * Return: Flags
 */
int get_flags_ize(const char *format, int *i)
{
	int j, ptr;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

for (ptr = *i + 1; format[ptr] != '\0'; ptr++)
{
	for (j = 0; FLAGS_CH[j] != '\0'; j++)
		if (format[curr_i] == FLAGS_CH[j])
		{
			flags |= FLAGS_ARR[j];
			break;
		}
	if (FLAGS_CH[j] == 0)
		break;
}
*i = ptr - 1;

return (flags);
}


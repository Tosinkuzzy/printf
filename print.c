/*
 * File: print.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * get_print - Entry p
 * @s: character that holds the conversion specifier
 * Des: the function loops through the structs array
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph f_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_conversion},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_reverse},
		{'S', print_big},
		{'p', print_address},
		{'%', print_percent}
	};
int flags = 14;

int i;

for (i = 0; i < flags; i++)
{
	if (f_arr[i].c == s)
		return (f_arr[i].f);
}
return (NULL);
}

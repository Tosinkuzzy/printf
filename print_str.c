/*
 * File: print_str.c
 * Author: Team collaboration
 */
#include "main.h"
/**
 * print_str - Entry p
 * @ptr: pointer
 * Return: count
 */
int print_str(va_list ptr)
{
	int n;
	char *s;

	s = va_arg(ptr, char *);

	if (s != NULL)
		n = print_puts(s);
	else
		n = print_puts("(null)");
	return (n);
}

/*
 * File: print_puts.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * print_puts - Entry p
 * @s: pointer to string
 *
 * Return: numbers
 */
int print_puts(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		n += _putchar(*s);
		s++;
	}
	return (i);
}

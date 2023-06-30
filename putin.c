/*
 * File: putin.c
 * Author: Team collaboration.
 */
#include "main.h"
/**
 *_put - Prints a string.
 * @str: The input.
 *
 * Return: number of characters printed.
 */
int _put(char *str)
{
	int scan = 0;

if (str != NULL)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
		scan++;
	}
	return (scan);
}
scan = _put("(null");
return (scan);
}

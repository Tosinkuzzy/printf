/*
 * File: write_funcs.c
 * Author: Team collaboration
 */
#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry p
 * @c: The character
 * Return: On success 1. and error, -1 is returned.
 * Des: _putchar uses a local buffer of 1024 to call write
 */
int _putchar(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - Entry p
 * des: prints a string to stdout
 * @ptr: pointer to the string
 * Return: number of chars written
 */
int _puts(char *ptr)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

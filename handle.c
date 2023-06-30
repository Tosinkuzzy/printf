/*
 * File: handle.c
 * Author: Team collaboration.int _putchar(char c);
 */
#include "main.h"
/**
 * print_int - Prints integer using putchar.
 * @args: A va_list containing the integer argument.
 *
 * Return: number of characters printed.
 */
int print_int(va_list args)
{
	int i;
	int scan = 0;

	i = va_arg(args, int);
	scan = print_int_helper(i);
	return (scan);
}

/**
 * print_binary - Prints an unsigned integer in binary format.
 * @args: The argument list.
 *
 * Return: number of characters printed.
 */
int print_binary(va_list args)
{
	unsigned int i;
	int scan = 0;

	i = va_arg(args, unsigned int);
	scan = print_binary_helper(i);
	return (scan);
}

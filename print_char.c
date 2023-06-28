/*
 * File: print_char.c
 * Author: Team collaboration
 */
#include "main.h"
/**
 * print_char - Entry p
 * des: print character
 * @ptr: pointer
 * Return: 1
 */
int print_char(va_list ptr)
{
	char c;
	int n;

	c = va_arg(ptr, int);

	n = _putchar(c);
	return (n);
}

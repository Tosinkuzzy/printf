/*
 * File: print_percent.c
 * Author: Team collaboration
 */
#include "main.h"
/**
 * print_percent - Entry p
 * des: prints %
 * @ptr: pointer
 * Return: void
 */
int print_percent(va_list ptr)
{
	int n;

	(void)ptr;
	n = _putchar('%');

	return (n);
}

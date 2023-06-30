/*
 * File: conversion.c
 * Author: Team collaboration
 */
#include "main.h"
/**
 * print_unsigned_int - Prints an unsigned integer.
 * @args: A variable argument list containing the unsigned int to be printed.
 *
 * Return: number of characters printed.
 */
int print_unsigned_int(va_list args)
{
	unsigned int i;
	int scan = 0;

	i = va_arg(args, unsigned int);
	scan = print_unsigned_helper(i, 10, -1);
	return (scan);
}

/**
 * print_unsigned_oct - Prints an unsigned integer in octal.
 * @args: A variable argument list containing the unsigned int to be printed.
 *
 * Return: number of characters printed.
 */
int print_unsigned_oct(va_list args)
{
	unsigned int i;
	int scan = 0;

	i = va_arg(args, unsigned int);
	scan = print_unsigned_helper(i, 8, -1);
	return (scan);
}

/**
 * print_unsigned_hexU - Prints an unsigned integer in hexadecimal U.
 * @args: A variable argument list containing the unsigned int to be printed.
 *
 * Return: number of characters printed.
 */
int print_unsigned_hexU(va_list args)
{
	unsigned int i;
	int scan = 0;

	i = va_arg(args, unsigned int);
	scan = print_unsigned_helper(i, 16, 1);
	return (scan);
}

/**
 * print_unsigned_hexl - Prints an unsigned integer in hexadecimal l.
 * @args: A variable argument list containing the unsigned int to be printed.
 *
 * Return: number of characters printed.
 */
int print_unsigned_hexl(va_list args)
{
	unsigned int i;
	int scan = 0;

	i = va_arg(args, unsigned int);
	scan = print_unsigned_helper(i, 16, -1);
	return (scan);
}

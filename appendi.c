/*
 * File: appendi.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * is_printable_str - Entry p
 * des: Evaluates.
 * @c: Char.
 *
 * Return: 1, 0 otherwise
 */
int is_printable_str(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
/**
 * append_hexa_code_int - Entry p
 * des: Append ascci in hexadecimal.
 * @buffer: Array.
 * @i: Index.
 * @ascii_code: CODE.
 * Return: Always 2
 */
int append_hexa_code_int(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* hexa code is always 2 digit long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
/**
 * is_digit_int - Entry p
 * des: Verifies
 * @c: Char
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit_int(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
/**
 * convert_size_number_int - Entry p
 * des: Casts a number.
 * @num: Number.
 * @size: Number indicated.
 *
 * Return: num
 */
long int convert_size_number_int(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
/**
 * convert_size_unsgnd_num - Entry p
 * des: Casts a number
 * @num: Number
 * @size: Number indicated
 *
 * Return: Casted value of num
 */
long int convert_size_unsgnd_num(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

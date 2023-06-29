/*
 * File: print_char.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * print_pointer_point - Entry p
 * des: Prints the value of a pointer variable
 * @types: arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: width
 * @precision: specification
 * @size: specifier
 * Return: Number of chars printed.
 */
int print_pointer_point(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	char c = 0, ptr = ' ';
	int ind = BUFF_SIZE - 2, len = 2, str_s = 1;
	unsigned long num_addrs;
	char map_to[] = "0123456789abcdef";
	void *addrs = va_arg(types, void *);

	UNUSED(width);
	UNUSED(size);

if (addrs == NULL)
	return (write(1, "(nil)", 5));

buffer[BUFF_SIZE - 1] = '\0';
UNUSED(precision);

num_addrs = (unsigned long)addrs;

while (num_addrs > 0)
{
	buffer[ind--] = map_to[num_addrs % 16];
	num_addrs /= 16;
	len++;
}

if ((flags & F_ZERO) && !(flags & F_MINUS))
	ptr = '0';
if (flags & F_PLUS)
	c = '+', len++;
else if (flags & F_SPACE)
	c = ' ', len++;

	ind++;


	return (write_pointer(buffer, ind, len,
				width, flags, ptr, c, str_s));
}
/**
 * print_non_printable_string - Entry p
 * des: Prints ascii codes in hexa
 * @types: arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: width
 * @precision: specification
 * @size: specifier
 * Return: Number of chars printed
 */
int print_non_printable_string(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	int n = 0, set = 0;
	char *str = va_arg(types, char *);

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

if (str == NULL)
	return (write(1, "(null)", 6));

while (str[n] != '\0')
{
	if (is_printable(str[n]))
		buffer[n + set] = str[n];
	else
		set += append_hexa_code(str[n], buffer, n + set);

	n++;
}
buffer[n + set] = '\0';

return (write(1, buffer, n + set));
}
/**
 * print_reverse_str - Entry p
 * des: Prints reverse string.
 * @types: arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: width
 * @precision: specification
 * @size: specifier
 * Return: Numbers of chars printed
 */

int print_reverse_str(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	char *str;
	int j, rev = 0;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);

	str = va_arg(types, char *);

if (str == NULL)
{
	UNUSED(precision);

	str = ")Null(";
}
for (j = 0; str[j]; j++)
;

for (j = j - 1; j >= 0; j--)
{
	char z = str[j];

	write(1, &z, 1);

	rev++;
}
return (rev);
}
/**
 * print_rot13strin_num - Entry p
 * des: Print a string in rot13.
 * @types: arguments
 * @buffer: Buffer
 * @flags:  Calculates active flags
 * @width: width
 * @precision: specification
 * @size: specifier
 * Return: Numbers of chars printed
 */
int print_rot13string_num(va_list types, char buffer[],
			int flags, int width, int precision, int size)
{
	char c;
	char *ptr;
	unsigned int n, s;
	int rot = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(types, char *);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

if (ptr == NULL)
	ptr = "(AHYY)";
for (n = 0; ptr[n]; n++)
{
	for (s = 0; in[s]; s++)
	{
		if (in[s] == ptr[n])
		{
			c = out[s];

			write(1, &c, 1);

			rev++;
			break;
		}
	}
	if (!in[j])
	{
		c = ptr[n];
		write(1, &c, 1);
		rev++;
	}
}
return (rev);
}

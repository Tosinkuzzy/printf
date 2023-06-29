/*
 * File: write_hand.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * handle_write_char_ter - Entry p
 * des: Prints a string
 * @c: char.
 * @buffer: Buffer
 * @flags:  Calculates active flags.
 * @width: width.
 * @precision: specifier
 * @size: specifier
 *
 * Return: Number of chars printed.
 */
int handle_write_char_ter(char c, char buffer[],
			int flags, int width, int precision, int size)
{
	/* char is stored at left and paddind at buffer's right */
	int n = 0;
	char padd = ' ';

	UNUSED(precision);
	UNUSED(size);

	if (flags & F_ZERO)
		padd = '0';

	buffer[n++] = c;
	buffer[n] = '\0';

	if (width > 1)
	{
		buffer[BUFF_SIZE - 1] = '\0';
		for (n = 0; n < width - 1; n++)
			buffer[BUFF_SIZE - i - 2] = padd;
				if (flags & F_MINUS)
					return (write(1, &buffer[0], 1) +
							write(1, &buffer[BUFF_SIZE - n - 1], width - 1));
				else
					return (write(1, &buffer[BUFF_SIZE - n - 1], width - 1) +
							write(1, &buffer[0], 1));
	}
	return (write(1, &buffer[0], 1));
}

#include "main.h"

/**
 * _putchar - Entry p
 * dse:writes the character c to stdout
 * @c: character
 *
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

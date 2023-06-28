#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry p
 * @c: character
 * return: count
 */
int _putchar(char c)
{
	int i;

	i = write(1, &c, 1);
	return (i);
}

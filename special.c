#include "main.h"
/**
 * print_special_helper - Entry point
 * @c: arg
 *
 * Return: 0, 1 otherwise.
 */
int print_special_helper(char c)
{
	int scan = 0;

	if ((c > 0 && c < 32) || c >= 127)
	{
		scan += _printf("\\x");
		if (c >= 0 && c <= 15)
			scan += _putchar('0');
		scan += _printf("%X", (unsigned int) c);
	}
	scan += _putchar(c);
	return (scan);
}

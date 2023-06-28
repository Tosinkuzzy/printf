/*
 * File: check.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * check_character - Entry p
 * des: return a function pointer for specific character.
 * @c: characteiir
 * Return: 0
 */
int (*check_type(char c))(va_list str)
{
int n;

check_t func[] = {
	{'c', print_char},
	{'s', print_str},
	{'%', print_percent}
};

n = 0;
while (n < 3)
{
	if (func[n].c == c)
	{
		return (func[n].f);
	}
	n++;
}
return (NULL);
}

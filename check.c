/*
 * File: check.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * check - Entry p
 * des: return a function pointer for specific character.
 * @c: character
 * Return: 0
 */
int (*check(char c))(va_list str)
{
	int n;

	check arr[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent}
	};

	n = 0;
	while (n < 3)
	{
		if (arr[n].c == c)
		{
			return (arr[n].f);
		}
		n++;
	}
	return (0);
}

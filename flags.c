/*
 * File: flag.c
 * Author: Team collaboration
 */
#include "main.h"

/**
 * get_flag - Entry p
 * des: turns on flags if _printf finds a flag modifier in the format string
 * @s: character.
 * @fl: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->add = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->notation = 1;
			i = 1;
			break;
	}
	return (i);
}

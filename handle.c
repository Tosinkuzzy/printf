/*
 * File: handle.c
 * Author: Team collaboration
 */
#include "main.h"
/**
 * handle_print_ - Entry p
 * des: Prints an argument
 * @fmt: formatted string.
 * @list: arguments passed.
 * @ind: arg
 * @buffer: Buffer
 * @flags: Calculates active flags
 * @width: width.
 * @precision: specification
 * @size: specifier
 * Return: 0 or 1;
 */
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
		int flags, int width, int precision, int size)
{
int n, ptr_len = 0, printed_chars = -1;
func_t fmt_types[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'i', print_int},
	{'d', print_int},
	{'b', print_binary},
	{'u', print_unsigned},
	{'o', print_octal},
	{'x', print_hexadecimal},
	{'X', print_hexa_upper},
	{'p', print_pointer},
	{'S', print_non_printable},
	{'r', print_reverse},
	{'R', print_rot13string},
	{'\0', NULL}
};
for (n = 0; fmt_types[n].fmt != '\0'; n++)
if (fmt[*ind] == fmt_types[n].fmt)
	return (fmt_types[n].fn(list, buffer,
				flags, width, precision, size));

if (fmt_types[n].fmt == '\0')
{
if (fmt[*ind] == '\0')
	return (-1);
ptr_len += write(1, "%%", 1);
if (fmt[*ind - 1] == ' ')
	ptr_len += write(1, " ", 1);
else if (width)
{
	--(*ind);
	while (fmt[*ind] != ' ' && fmt[*ind] != '%')
		--(*ind);
	if (fmt[*ind] == ' ')
		--(*ind);
	return (1);
}
ptr_len += write(1, &fmt[*ind], 1);
return (ptr_len);
}
return (printed_chars);
}

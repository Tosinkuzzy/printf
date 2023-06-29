/*
 * File: main.h
 * Author: Team project
 */

#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct
 *
 * @fmt: format.
 * @fn: function.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Entry
 *
 * @fmt: format.
 * @fm_t: function.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print_str(const char *fmt, int *i, 
		va_list list, char buffer[], int flags, int width, int precision, int size);

int print_char_ter(va_list types, char buffer[],
			int flags, int width, int precision, int size);
int print_string_var(va_list types, char buffer[],
			int flags, int width, int precision, int size);
int print_percent_age(va_list types, char buffer[],
			int flags, int width, int precision, int size);

int print_int_ger(va_list types, char buffer[],
			int flags, int width, int precision, int size);
int print_binary_odds(va_list types, char buffer[],
			int flags, int width, int precision, int size);
int print_unsigned_num(va_list types, char buffer[],
			int flags, int width, int precision, int size);
int print_octal_numb(va_list types, char buffer[],
			int flags, int width, int precision, int size);
int print_hexadecimal_numbe(va_list types, char buffer[],
			int flags, int width, int precision, int size);
int print_hexa_upper_number(va_list types, char buffer[],
			int flags, int width, int precision, int size);

int print_hexa_dec(va_list types, char map_to[],
		char buffer[], int flags, char flag_ch, int width, int precision, int size);

int print_non_printable_string(va_list types, char buffer[],
			int flags, int width, int precision, int size);

int print_pointer_point(va_list types, char buffer[],
			int flags, int width, int precision, int size);

int get_flags_ize(const char *format, int *i);
int get_width_numb(const char *format, int *i, va_list list);
int get_precision_numbe(const char *format, int *i, va_list list);
int get_size_number(const char *format, int *i);

int print_reverse_str(va_list types, char buffer[],
			int flags, int width, int precision, int size);

int print_rot13string_num(va_list types, char buffer[],
			int flags, int width, int precision, int size);

int handle_write_char_ter(char c, char buffer[],
			int flags, int width, int precision, int size);
int write_number_int(int is_positive, int ind, char buffer[],
			int flags, int width, int precision, int size);
int write_num_ber(int ind, char bff[], int flags, int width, int precision,
			int length, char padd, char extra_c);
int write_pointer_poi(char buffer[], int ind, int length,
			int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd_int(int is_negative, int ind,
		char buffer[],
			int flags, int width, int precision, int size);

int is_printable_str(char);
int append_hexa_code_int(char, char[], int);
int is_digit_int(char);

long int convert_size_number_int(long int num, int size);
long int convert_size_unsgnd_num(unsigned long int num, int size);

#endif /* MAIN_H */

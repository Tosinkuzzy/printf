/*
 * File: Main.h
 * Author: Team project
 */

#ifndef main_h
#define main_h

int _printf(const char *format, ...);
int addres(va_list l, flags_t *f);
int string(va_list l, flags_t *f);
int hex(va_list l, flags_t *f);
char *conversion(unsigned long int num, int base, int lower);
int big(va_list l, flags_t *f);
int get_flag(char s, flags_t *fl);
int print_int(va_list l, flags_t *f);
int (*print(char s))(va_list, flags_t *);
int _putchar(char c);
int _puts(char *ptr);

#endif

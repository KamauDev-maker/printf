#ifndef MAIN_H
#define MAIN_H
#define NULL ((void *)0)
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int to_Binary(unsigned int n);
int to_Octal(unsigned int n);
int to_Hexa(unsigned int num);
int _print_str(char *string);
int _print_int(long int var);
int print_char(va_list arguments);
int print_percent(__attribute__((unused))va_list arguments);
#endif

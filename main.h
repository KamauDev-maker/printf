#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printer - structure for printing various types
 * @si: type to print
 * @func_t: function to print
*/

typedef struct printer
{
    const char si;
    int(*func_t)(va_list);
}printer_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(const char a))(va_list);
int (*func_t)(va_list);
#endif
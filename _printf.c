#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - function to print anything
 * @format: types of argument passed
 *Return: number of character printed
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
int i;
int flag = 0;
if (format == NULL)
return (0);
va_start(args, format);
for (i = 0; *(format + i) != '\0'; i++)
{
if (format[i] == '%')
{
flag = 1;
}
else if (flag == 1)
{
flag = 0;
switch (format[i])
{
case 'c':
_putchar(va_arg(args, int));
count += 1;
break;
case 's':
count += _print_str(va_arg(args, char *));
break;
case '%':
_putchar('%');
count += 1;
break;
case 'd':
count += _print_int((long)(va_arg(args, int)));
break;
case 'i':
count += _print_int((long)(va_arg(args, int)));
break;
case 'b':
count += to_Binary(va_arg(args, int));
break;
case 'u':
count += _print_int(va_arg(args, unsigned int));
break;
case 'o':
count += to_Octal(va_arg(args, int));
break;
case 'x':
count += to_Hexa(va_arg(args, int));
break;
case 'X':
count += to_Hexa(va_arg(args, int));
break;
default:
_putchar('%');
_putchar(format[i]);
count += 2;
}
}
else
{
_putchar(format[i]);
count += 1;
}
}
va_end(args);
return (count);
}

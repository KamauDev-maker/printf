#include "main.h"

/**
 * _printf - function to print something
 * @format: types of args passed to the function
 * Return: number of characters printed
*/

int _printf(char *format, ...)
{
    int count = 0, i;
    va_list args;
    int (*o)(va_list);

    va_start(args, format);
    if (format == NULL)
        return (-1);
    for (i = 0; format[i]; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (!(format[i]))
            return (-1);
            o = get_func(format[i]);
            if (o == NULL)
            {
                _putchar('%');
                _putchar(format[i]);
                count += 2;
            }
            else
                count += o(args);
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
    }
    va_end(args);
    return (count);
}
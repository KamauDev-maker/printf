#include "main.h"

/**
 * get_func - function to find a function pointer
 *  associated with specifier
 * @a: specifier to find the correct function
 * Returns: function pointer
*/

int (*get_func(const char a))(va_list)
{
    unsigned int i = 0;
        printer_t opt[] = {
            {'c', print_char},
            {'s', print_string},
            {'%', print_percent},
        };

        for (; opt[i].si; i++)
        {
            if (a == opt[i].si)
                return (opt[i].func_t);
        }
        return (NULL);
}
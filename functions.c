#include "main.h"

/**
 * print_char - Print characters (%c)
 * @arg_list: Stores a list of characters
 *
 * Return: num of characters printed
 */
int print_char(va_list arg_list)
{
	char c = va_arg(arg_list, int);

	return (_putchar(c));
}

/**
 * print_percent - function to print %
 * @arguments: unused
 *
 * Return: always 1
 */

int print_percent(__attribute__((unused))va_list arguments)
{
	char c = '%';

	_putchar(c);
	return (1);
}

/**
 * _print_str - prints a string
 * @string: string to be printed
 * Return: length of printed characters
 */

int _print_str(char *string)
{
	int count = 0;

	if (string != NULL)
		while (*string)
		{
			_putchar(*string++);
			count += 1;
		}
	else
		return (_print_str("(null)"));
	return (count);
}

/**
 * _print_int - prints an integer
 * @var: variable to be printed
 * Return: length of printed characters
 */

int _print_int(long int var)
{
	int count = 0;

	if (var < 0)
	{
		_putchar('-');
		count += 1;
		var = -var;
	}
	if (var / 10)
		count += _print_int(var / 10);
	_putchar(var % 10 + '0');
	count += 1;

	return (count);
}

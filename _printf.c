#include "main.h"

/**
 * _printf - produce output according to format
 * @format: the string to print
 * Return: the number of chars printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
	}
	_putchar('\n');

	return (i);
}

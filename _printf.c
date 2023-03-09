#include "main.h"
#include <stdarg.h>
/**
 * _printf - produce output according to format
 * @format: the string to print
 * Return: the number of chars printed
 */

int _printf(const char *format, ...)
{
	int i = 0;

	va_list valist;
	int (*f)(va_list);
	va_start(valist, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			f = get_convert_func(format[i]);
			/*if (format[i] == 's')
			{
				print_string(valist);
			}*/
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	_putchar('\n');
	va_end(valist);
	return (i);
}

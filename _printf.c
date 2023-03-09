#include "main.h"
#include <stdarg.h>
/**
 * get_convert_func - looks for the letter
 * @s: the thing that will be checked for the letter
 * Return: the right function to be used
 */

int (*get_convert_func(const char *s))(va_list)
{
	convert_t converter[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};
	int i = 0;

	if(_strlen(s) != 1)
		return (NULL);

	while (converter[i].convert != NULL && converter[i].convert[0] != s[0])
	{
		i++;
	}

	return (converter[i].f);
}
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

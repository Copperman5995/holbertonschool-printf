#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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
		{"d", print_dec},
		{NULL, NULL}
	};
	int i = 0;

	while (converter[i].letter != NULL && converter[i].letter[0] != s[0])
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
	va_list ap;
	int (*f)(va_list);
	unsigned int i = 0, counter = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				f = get_convert_func(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				counter += f(ap);
				continue;
			}
		}
		i++;
	}
	va_end(ap);
	return (counter);
}


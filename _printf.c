#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * printother - prints other passed chartaers
 * @i: used for a bolloen statment
 * @c1: the first charter to be printed
 * @c2: second charater to be pritned
 * Return: number of charaters printed
 */
int printother(int i, char c1, char c2)
{
	if (i == -69)
	{
		_putchar(c1);
		_putchar(c2);
	}
	return (2);
}
/**
 * get_convert_func - looks for the letter
 * @s: the thing that will be checked for the letter
 * @ap: the lsit they look through
 * Return: the right function to be used
 */
int get_convert_func(char s, va_list ap)
{
	convert_t converter[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec}
	};
	int i = 0;

	for (i = 0; i < 4; i++)
		if (converter[i].letter[0] == s)
			return (converter[i].f(ap));
	return (-69);
}
/**
 * _printf - pritns things
 * @format: the string to print
 * Return: the number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, counter = 0;
	int bettyabword = 0;

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
				bettyabword = get_convert_func(format[i + 1], ap);
				counter += printother(bettyabword, format[i], format[i + 1]);
				i += 2;
				continue;
			}
		}
		i++;
	}
	va_end(ap);
	return (counter);
}

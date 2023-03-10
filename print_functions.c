#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - print the char passed in
 * va_list: the list to pull from
 * Return: 1 on success
 */
int print_char(va_list c)
{	
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}
/**
 * print_string - print the string passed in
 * @s: the list to pull from
 * Return: 1 on success
 */
int print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	_puts(str);
	return (1);
}
/**
 * print_string - print the string passed in
 * va_list: the list to pull from
 * Return: 1 on success
 */
int print_int(va_list n)
{
	return (1);
}

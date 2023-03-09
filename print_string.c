#include "main.h"
#include <stdarg.h>

/**
 * print_string - print the string passed in
 * va_list: the list to pull from
 * Return: 1 on success
 */

int print_string(va_list s)
{
	char *str = va_arg(s, char *);

	_puts(str);
	return (1);
}

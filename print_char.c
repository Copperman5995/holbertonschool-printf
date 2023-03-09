#include "main.h"
/**
 * print_char - prints a char
 * @c: is the charater to be printed
 * Return: rerturn 1 on succes
 */

int print_char(va_list c)
{
	char cprint = (char)va_arg(c, int);

	_putchar(cprint);

	return (1);
}

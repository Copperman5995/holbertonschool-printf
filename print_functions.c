#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - print the char passed in
 * @c: the list to pull from
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
 * print_int - print the int passed in
 * @n: the list to pull from
 * Return: 1 on success
 */
int print_int(va_list n)
{
	int finalint[10];
	int i = 1, j = 1000000000, k, sum = 0, counter = 0;

	k = va_arg(n, int);

	if (k < 0)
	{
		k = k * -1;
		_putchar('-');
		counter++;
	}
	finalint[0] = k / j;

	while (i < 10)
	{
		j = j / 10;
		finalint[i] = (k / j) % 10;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		sum = sum + finalint[i];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + finalint[i]);
			counter++;
		}
		i++;
	}



	return (counter);
}

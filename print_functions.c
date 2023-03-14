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
	int len;

	if (str == NULL)
	{
		str = "(null)";
	}
	len = _strlen(str);
	_puts(str);
	return (len);
}
/**
 * print_int - print the int passed in
 * @n: the list to pull from
 * Return: 1 on success
 */
int print_int(va_list n)
{
	int finalint[10];
	int i = 1, j = 1000000000, k, sum = 0, counter = 0, bool = 0;

	k = va_arg(n, int);
	if (k == 0)
	{
		_putchar('0');
		return (1);
	}
	if (k < 0)
	{
		if (k == -2147483648)
		{
			bool = 1;
			k += 1;
		}
		k = k * -1;
		_putchar('-');
		counter++;
	}
	finalint[0] = k / j;
	for (; i < 10 ; i++)
	{
		j = j / 10;
		if (bool == 1 && i == 9)
			finalint[i] = ((k / j) % 10) + 1;
		else
			finalint[i] = (k / j) % 10;
	}
	for (i = 0 ; i < 10 ; i++)
	{
		sum = sum + finalint[i];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + finalint[i]);
			counter++;
		}
	}
	return (counter);
}

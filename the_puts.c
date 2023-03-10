#include "main.h"
#include <unistd.h>
/**
 * _putchar - puts one charater
 * @c: the charter to print
 *
 * Return: on succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - print string + new line to "stdout"
 * @str: strin value
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
/**
 * _strlen - find lenght of string
 * @str: the string to be measured
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

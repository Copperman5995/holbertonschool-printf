
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - somthing
 * Return: something
 */

int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("Character: %c - String: %s - Percent: 100%% [%i]\n", 'C', "This is a string", len);
	len2 = printf("Character: %c - String: %s - Percent: 100%% [%i]\n", 'C', "This is a string", len2);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("Char: %c\n", 'C');
	len2 = printf("Char: %c\n", 'C');
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("Str: %s\n", "Hello");
	len2 = printf("Str: %s\n", "Hello");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("Int: %i\n", 123);
	len2 = printf("Int: %i\n", 123);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("Dec: %d\n", 456);
	len2 = printf("Dec: %d\n", 456);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	len = _printf("%i\n", 1);
	len2 = printf("%i\n", 1);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}

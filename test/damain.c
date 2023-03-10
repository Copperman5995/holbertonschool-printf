
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
	int n = _printf("");
	int n2 = printf("");

	_printf(NULL);
	printf(NULL);
	_putchar('\n');

	len = _printf("_n = %i\n", n);
	len2 = _printf("_n2 = %i\n", n2);

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_putchar('\n');

	len = printf("n = %i\n", n);
	len2 = printf("n2 = %i\n", n2);

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_putchar('\n');

	len = _printf("%% = %\n");
	_putchar('\n');
	_printf("Len:[%d]\n", len);
	_putchar('\n');

	len2 = printf("%% = %\n");
	_putchar('\n');
	printf("Len2:[%d]\n", len2);
	_putchar('\n');

	len = _printf("%%_ = % \n");
	_printf("Len:[%d]\n", len);
	_putchar('\n');

	len2 = printf("%%_ = % \n");
	printf("Len:[%d]\n", len2);
	_putchar('\n');

	return (0);
}

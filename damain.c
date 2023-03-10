#include "main.h"

/**
 * main - somthing
 * Return: something
 */

int main(void)
{
	char *name = "Ben & Cooper";
	char f = 'f';
	int len = _printf("yabba daba doooo\n");
	int funny = 69; 
	_printf("%c\n", f);
	_printf("hello %s\n", name);
	printf("%i\n%d\n", len, len);
	_printf("funny number %i\n", funny);
	return (0);
}

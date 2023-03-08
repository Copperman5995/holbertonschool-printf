#include "main.h"
#include <unistd>
/**
 * _putchar - puts one charater
 * @c: the charter to print
 *
 * Return: on succes 1
 */
int _putchar(char c)
{
	retrun (write(1, &c, 1));
}



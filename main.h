#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct convert - looks for the thing after the %
 * @letter: is the letter that is passed
 * @f: is the function that will be passed
 */
typedef struct convert
{
	char *letter;
	int (*f)(va_list);
} convert_t;

int _putchar(char c);
void _puts(char *str);
int _printf(const char *format, ...);
int _strlen(char *str);


int print_string(va_list s);
int print_char(va_list c);
int print_int(va_list n);

#endif

#include "main.h"
/**
 * get_convert_func - looks for the letter
 * @s: the thing that will be checked for the letter
 * Return: the right function to be used
 */

int (*get_convert_func(const char *s))(va_list)
{
	convert_t converter[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};
	int i = 0;

	if(_strlen(s) != 1)
		return (NULL);

	while (converter[i].convert != NULL && converter[i].convert[0] != s[0])
	{
		i++;
	}

	return (converter[i].f);
}




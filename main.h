#ifndef MAIN_H
#define MAIN_H
/**
 * struct convert - looks for the thing after the %
 * @letter: is the letter that is passed
 * @f: is the function that will be passed
 */
typdef struct convert
{
	char *letter;
	int (*f)(va_list);
}covert_t;


int _putchar(char c);
void _puts(char *str);
int _printf(const char *format, ...);
int _strlen(char *str);

// the difernt print functions//
int print_string(va_list);
int print_char(va_list);
int print_int(va_list);






#endif

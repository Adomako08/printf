#include "main.h"

/**
 * print_c - must print a character.
 * @val:  be arguments.
 * Return: integer.
 */
int print_c(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}

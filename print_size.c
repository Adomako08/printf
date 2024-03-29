#include "main.h"

/**
 * print_size - calculates the size to csat the argument
 * @format: be formatted string in which to print the argument
 * @i: list of arguments to print
 *
 * Return: size
 */
int print_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}

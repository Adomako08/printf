#include "main.h"

/**
 * ch_digit - verifies if char is a digit
 * @c: char to evaluate
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int ch_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

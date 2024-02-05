#include "main.h"

/**
 * ch_printable - Evaluates if a char is printable
 * @c: char to be evaluated
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int ch_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

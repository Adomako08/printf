#include "main.h"

/**
 * convert_unsigned_size - casts a number to the specified size
 * @num: number to be casted
 * @size: number indicating the size to cast
 *
 * Return: casted value of num
 */
long int convert_unsigned_size(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

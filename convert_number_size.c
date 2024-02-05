#include "main.h"

/**
 * convert_number_size - casts a number to the specified size
 * @num: number to be casted
 * @size: number indicating the type to cast
 *
 * Return: casted value of num
 */
long int convert_number_size(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

#include <stdio.h>
#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The unsigned long integer that is searched.
 * @index: The index of the bit we're looking for.
 *
 * Return: The bit value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

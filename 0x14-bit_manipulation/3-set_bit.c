#include <stdio.h>
#include "main.h"

/**
 * set_bit - Toggle a bit at a given index.
 * @n: Pointer to the unsigned long int.
 * @index: Index of the bit to set starting form 0.
 *
 * Return: 1 if successful and -1 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1UL << index);

	return (1);
}

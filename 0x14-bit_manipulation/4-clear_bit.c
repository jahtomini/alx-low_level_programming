#include <stdio.h>

/**
 * clear_bit - Set bit to 0 at a particular index.
 * @n: The binary number as an unsigned long int.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if succesful and -1 otherwise.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1UL << index);

	return (1);
}

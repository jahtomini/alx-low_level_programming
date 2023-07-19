#include "main.h"

/**
 * flip_bits -  Calculate the number of bits that need to be flipped
 * in order to transform one number (n) into another number (m).
 *
 * @n: The first bit.
 * @m: The bit to be transformed to.
 *
 * Return: The number of bits that need to be flipped.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

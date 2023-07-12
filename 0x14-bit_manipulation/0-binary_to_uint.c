#include "main.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - Convert binary value to unsigned integer.
 * @b: The binary value as string.
 *
 * Return: The converted value as an unsigned integer.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int *numbers;
	unsigned int total = 0;
	int i, array_size;

	if (b == NULL)
		return (0);

	array_size = _strlen(b) * sizeof(int);

	numbers = malloc(array_size);


	for (i = (_strlen(b) - 1); i >= 0; i--)
	{
		int pow = _strlen(b) - 1 - i;

		if (b[i] != '1' && b[i] != '0') /* non-binary value */
			return (0);
		else if (b[i] == '1')
			numbers[i] = 1 * _pow(2, pow);
		else
			numbers[i] = 0;
	}

	for (i = (_strlen(b) - 1); i >= 0; i--)
		total = total + numbers[i];

	return (total);
}

/**
* _pow - Exponentiation.
* @base: The base.
* @exp: The exponent.
*
* Return: The result of the exponentiation.
*/
unsigned int _pow(unsigned int base, unsigned int exp)
{
	unsigned int i, num = base;

	if (exp == 0)
		return (1);

	for (i = 1; i < exp; i++)
		num = num * base;

	return (num);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));

	return (0);
}

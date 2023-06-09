#include "main.h"

/**
 * _memcpy - a function that copies the first n bytes
 * from area src to area dest
 * @dest: The string to be copied to
 * @n: Number of bytes in the string to be copied
 * @src: The string to be copied from
 * Return: Pointer to the string dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


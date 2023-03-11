#include "main.h"

/**
 * _memset - a function that fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: The string
 * @b: The replacing byte
 * @n: Number of bytes in the string to be replaced
 * Return: Pointer to the string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


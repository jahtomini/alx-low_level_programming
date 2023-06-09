#include "main.h"
#include <stdlib.h>

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: The string to be searched
 * @c: The char to be searched for
 *
 * Return: Pointer to the first occurrence of char c and NULL
 * if it isn't found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}


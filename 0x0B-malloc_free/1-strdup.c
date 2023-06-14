
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Create a copy of a string.
 *
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the copy.
 */
char *_strdup(char *str)
{
	int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc(sizeof(str));

	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}

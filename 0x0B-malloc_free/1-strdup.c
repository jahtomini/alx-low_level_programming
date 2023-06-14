
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
		return (NULL);

	copy = malloc(_strlen(str) + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));

	return (0);
}

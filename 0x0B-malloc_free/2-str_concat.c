#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: An array to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int first_string_len = _strlen(s1);
	int second_string_len = _strlen(s2);
	int total_length = first_string_len + second_string_len;
	char *concatenation = malloc(sizeof(s1) + sizeof(s2));

	if (concatenation == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == '\0')
			concatenation[i] = ' ';
		else
			concatenation[i] = s1[i];
	}

	j = 0;

	for (i = first_string_len; i < total_length; i++)
	{
		if (s2[j] == '\0')
			concatenation[i] = ' ';
		else
			concatenation[i] = s2[j];

		j++;
	}

	concatenation[total_length + 1] = '\0';

	return (concatenation);
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
	{
		return (1 + _strlen(s + 1));
	}

	return (0);
}

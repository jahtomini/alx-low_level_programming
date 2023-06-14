#include "main.h"
#include <stdio.h>
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
	int first_string_len;
	int second_string_len;
	int total_length;
	char *concatenation;
	char *first;
	char *second;


	if (s1 == NULL)
	{
		first = malloc(1);
		first[0] = '\0';
		first_string_len = 1;

	}
	else {
		first = s1;
		first_string_len = _strlen(first);
	}

	if (s2 == NULL)
	{
		second = malloc(1);
		second[0] = '\0';
		second_string_len = 1;
	} else {
		second = s2;
		second_string_len = _strlen(second);
	}


	total_length = first_string_len + second_string_len;


	concatenation = malloc((sizeof(char) * first_string_len) + (sizeof(char)  * second_string_len) + 1);

	if (concatenation == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < first_string_len; i++)
	{
		if (first[i] == '\0')
			concatenation[i] = ' ';
		else
			concatenation[i] = first[i];
	}


	j = 0;

	for (i = first_string_len; i < total_length; i++)
	{
		if (second[j] == '\0')
			concatenation[i] = ' ';
		else
			concatenation[i] = second[j];

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
		return (1 + _strlen(s + 1));

	return (0);
}

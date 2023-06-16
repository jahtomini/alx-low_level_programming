#include <stdlib.h>
#include <string.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n) 
{
	int s1_len, s2_len;
	char *first, *second;

    if (s1 == NULL)
	{
		s1_len = 0;
	}
	else
	{
		first = s1;
		s1_len = strlen(first);
	}

	if (s2 == NULL)
	{
		second = malloc(1);
		s2_len = 1;
	}
	else
	{
		second = s2;
		s2_len = strlen(second);
	}


    if (n >= strlen(s2))
    {
        return (concatenate(first, second, s1_len, s2_len));
    }

    return (concatenate(first, second, s1_len, n));
}

/**
 * concatenate - Combine two strings into one and return the result.
 *
 * @first: The first string.
 * @second: The second string.
 * @len1: The length of the first string.
 * @len2: The length of the second string.
 *
 * Return: A pointer to the concatenated string.
*/
char *concatenate(char *first, char *second, int len1, int len2)
{
	char *result;
	int total, i, j;

	total = len1 + len2;
	result = malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		if (first[i] != '\0')
			result[i] = first[i];
	}

	j = 0;

	for (i = len1; i < total; i++)
	{
		if (second[j] != '\0')
			result[i] = second[j];
		j++;
	}

	result[total + 1] = '\n';
	return (result);
}

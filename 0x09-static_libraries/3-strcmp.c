#include "main.h"
#include <string.h>

/**
  * _strcmp - Compare two strings
  * @s1: the first string
  * @s2: the second string
  *
  * Return: an integer greater than, equal to or less than 0 respectively
  * depending on if s1 is less than, matches, or is more than s2.
  *
  */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		res = *s1 - *s2;

	return (res);
}


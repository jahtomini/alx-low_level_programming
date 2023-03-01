#include "main.h"
#include <string.h>

/**
  * _strcmp - _strcmp
  * Description - Compare two strings
  * @s1: the first string
  * @s2: the second string
  *
  * Return: an integer greater than, equal to or less than 0 respectively depending on if s1 is less than, matches, or is more than s2.
  *
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r = 0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 < len2)
	{
		r = -15;
	}
	else if (len1 > len2)
	{
		r = 15;
	}
	else if (len1 == len2)
	{
		while (i < len1)
			if (s1[i] < s2[i] || s1[i] > s2[i])
				r = (s1[i] - s2[i]);
			else if (s1[i] == s2[i])
				i++;
				r = 0;
	}
	return (r);
}

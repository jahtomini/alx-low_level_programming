#include "main.h"

/**
  * cap_string - Capitalize all letters in a string
  * @s: the string
  *
  * Return: the capitalized string
  *
  */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		char j = s[i - 1];

		if (j == ',' || j == ' ' || j == ';' || j == '.' || j == '!' ||
		j == '?' || j == '"' || j == '(' || j == ')' || j == '{' ||
		j == '}' || j == '\n' || j == '\t' && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		} else if ((s[0] >= 97 && s[0] <= 122))
			s[0] = s[0] - 32;
		}
		else
		{
			s[i] = s[i];
		}
	}

	return (s);
}

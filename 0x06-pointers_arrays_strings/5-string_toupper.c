#include "main.h"

/**
  * string_toupper - Turn all lowercase characters in a string to uppercase
  * @s: the string
  *
  * Return: nothing
  *
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}

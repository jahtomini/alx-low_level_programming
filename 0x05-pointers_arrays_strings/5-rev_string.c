#include "main.h"
#include <string.h>

/**
  * rev_string - rev_string
  * Description - reverse a string
  * @s: the string being pointed at
  *
  * Return: empty
  *
  */

char *strrev(char *str);

void rev_string(char *s)
{
	strrev(s);	
}

char *strrev(char *str)
{
	char *p1, *p2;

	if (! str || ! *str)
		return str;
	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return str;
}

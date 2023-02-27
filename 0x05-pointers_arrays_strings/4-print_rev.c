#include "main.h"
#include <string.h>

/**
  * print_rev - print_rev
  * Description - print a string to stdout in reverse
  * @s: the string being pointed at
  *
  * Return: empty
  *
  */


void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

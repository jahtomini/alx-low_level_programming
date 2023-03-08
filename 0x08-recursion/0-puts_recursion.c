#include "main.h"
#include <string.h>

/**
 * _puts_recursion - print a string followed by a new line
 * @s: The string
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	unsigned long i = 0;

	for (i = 0; i < strlen(s); i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

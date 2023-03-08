#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: The string
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	char *t = s + 1;

	_putchar(s[0]);

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(t);
}

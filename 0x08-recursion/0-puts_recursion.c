#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: The string
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

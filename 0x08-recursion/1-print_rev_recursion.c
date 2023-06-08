#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - print a string in reverse followed by a new line
 * @s: The string
 * Return: nothing.
 */

//\ncolton

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
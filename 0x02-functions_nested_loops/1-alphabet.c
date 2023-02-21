#include "main.h"

/**
* main - Entry point
* description - Print the alphabet in lowercase followed by a new line
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int i;
	char c;
	char n = '\n';

	for (c = 'a'; c < 'z'; i++)
	{
		_putchar(c);
	}
	_putchar(n);
}

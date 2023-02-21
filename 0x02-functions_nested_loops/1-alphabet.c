#include "main.h"

/**
* main - Entry point
* description - Print the alphabet in lowercase followed by a line
* Return: Always 0 (Success)
*/

int main(void)
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

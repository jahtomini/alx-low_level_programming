#include "main.h"

/**
* main - Entry point
* description - Print the alphabet in lowercase followed by a line
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char c[25] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(c[i]);
	}
	_putchar("\n");
}

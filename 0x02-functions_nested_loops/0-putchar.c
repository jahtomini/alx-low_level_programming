#include "main.h"

/**
* main - Entry point
* description - Print _putchar, followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char c[9] = "_putchar\n";
	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}

#include "main.h"

/**
 * print_line - print_line
 * @n: input, the number of lines to draw
 * Description - print a line using the '_' character n times
 * Return - No return value
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}

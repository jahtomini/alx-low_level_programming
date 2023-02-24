#include "main.h"

/**
 * print_diagonal - print_diagonal
 *
 * Description - print a diagonal using the '\' character n times
 * Return - No return value
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{	
		for (i < 0; i > n; i++)
		{
			_putchar('\');
		}
		_putchar('\n')
	}
}

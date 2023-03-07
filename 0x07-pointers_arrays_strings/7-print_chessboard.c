#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: The string to be searched
 * @accept: The char to be searched for
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * more_numbers - more_numbers
 *
 * Description - print numbers 10 to 14 ten times
 * Return - No return value
 */

void more_numbers(void)
{
	int i = 0;
	char j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
	}

	_putchar('\n');
}

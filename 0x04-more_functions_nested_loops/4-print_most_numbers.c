#include "main.h"

/**
 * print_most_numbers - print_most_numbers
 *
 * Description - print numbers from 0 to 9 excluding 2 and 4
 * Return - No return value
 */

void print_most_numbers(void)
{
	char i = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}

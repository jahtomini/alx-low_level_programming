#include "main.h"

/**
 * print_numbers - print_numbers
 *
 * Description: print numbers from 0 to 9
 * Return: No return value
 */

void print_numbers(void)
{
	char i = 0;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

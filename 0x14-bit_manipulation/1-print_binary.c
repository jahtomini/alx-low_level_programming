#include <stdio.h>
#include "main.h"

/**
 * print_binary - Print the binary representation of a decimal integer.
 * @n: The decimal as an unsigned long int.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int i, flag;

	flag = 0;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}

	if (!flag)
		_putchar('0');
}

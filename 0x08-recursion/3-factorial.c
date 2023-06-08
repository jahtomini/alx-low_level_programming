#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: the factorial of n if n > 0.
 *         1 to indicate an error if n < 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}

	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

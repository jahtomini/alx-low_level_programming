#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int div = 1;

	if (n <= 1)
	{
		return (0);
	}

	return (is_divisible(n, div + 1));
}

/**
 * is_divisible - Recursively check if a number is
 * exactly divisible by another number.
 *
 * @num: The number being checked.
 * @div: The divisor.
 *
 * Return: If the number is only divisible by itself, 1. If not, 0.
 */

int is_divisible(int num, int div)
{
	if (num == div)
	{
		return (1);
	}

	if (num != div && num % div == 0)
	{
		return (0);
	}

	return (is_divisible(num, div + 1));
}

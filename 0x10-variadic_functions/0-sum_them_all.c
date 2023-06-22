#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all parameters.
 *
 * @n: Number of optional parameters.
 *
 * Return: The sum of parameters as long as n != 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}

	return (sum);
}

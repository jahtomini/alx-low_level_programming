#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 *
 * @separator: A string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(char *separator, unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}

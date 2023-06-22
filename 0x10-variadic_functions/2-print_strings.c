#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings, followed by a new line.
 *
 * @separator: A string to be printed between strings.
 * @n: The number of strings passed to the function.
 *
 * Return: Nothing.
 *
 */

void print_strings(char *separator, unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *present_string;
	unsigned int last = n - 1;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		present_string = va_arg(ap, char*);

		if (present_string == NULL)
			printf("(nil)");
		else if (i != last && separator != NULL)
			printf("%s%s", present_string, separator);
		else
			printf("%s", present_string);
	}

	printf("\n");

	va_end(ap);
}

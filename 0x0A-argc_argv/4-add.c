#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

#define FAILURE -1

/**
 * main - Add all passed non-zero-indexed arguments to a program and print the output.
 *
 * @argc: Number of arguments.
 * @argv: Array of arguments as strings.
 *
 * Return: 0 if successful and -1 if not.
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	if (validate_args(argc, argv) == FAILURE)
	{
		printf("Error\n");
		return (-1);
	}

	for (i = 1; argv[i] != NULL; i++)
	{
		result = result + atoi(argv[i]);
	}

	printf("%i\n", result);
	return (0);
}

/**
 * validate_args - Check if program arguments contain non-digit symbols.
 *
 * @argc: Number of arguments passed to the program.
 * @args: Array of arguments.
 *
 * Return: If no arguments contain non-digit symbols, 0. Else, FAILURE (-1).
 */
int validate_args(int argc, char *args[])
{
	int i, j;
	char current_char;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		arg = args[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			current_char = arg[j];

			if (current_char && !isdigit(current_char))
			{
				return (FAILURE);
			}
		}
	}

	return (0);
}

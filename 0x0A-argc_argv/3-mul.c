#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply exactly two non-zero-indexed arguments to a program.
 *
 * @argc: Number of arguments.
 * @argv: Array of arguments as strings.
 *
 * Return: 0 if successful and -1 if not.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

#include <stdio.h>

/**
 * main - Print the number of arguments to the program.
 *
 * @argc: Number of arguments.
 * @argv: Array of arguments as strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}

#include <stdio.h>

/**
 * main - Print all arguments to the program.
 *
 * @argc: Number of arguments.
 * @argv: Array of arguments as strings.
 *
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - A function that adds positive numbers
  *
  * @argc: number of args
  * @argv: array of args
  *
  * Return: 0
  *
  */

int main(int argc, char *argv[])
{
	int s;
	int i = 0;

	if (argc == 1)
	{
		printf("%i\n", i);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
	}

	s = 0;

	for (i = 1; i < argc; i++)
	{
		s = s + atoi(argv[i]);
	}

	printf("%i\n", s);
	return (0);
}


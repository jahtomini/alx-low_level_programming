#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - A function that multiplies the two arguments it receives
  *
  * @argc: number of args
  * @argv: array of args
  *
  * Return: 0
  *
  */

int main(int argc, char *argv[])
{
	int i;


	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", i);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}


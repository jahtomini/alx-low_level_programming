#include "main.h"
#include <stdio.h>

/**
  * main - A function that prints the number of arguments passed to it
  * @argc: number of args
  * @argv: array of args
  * Return: nothing
  *
  */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}

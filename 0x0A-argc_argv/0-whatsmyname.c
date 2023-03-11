#include "main.h"
#include <stdio.h>

/**
  * main - A function that prints its own name
  * @argc: number of args
  * @argv: array of args
  *
  * Return: nothing
  *
  */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

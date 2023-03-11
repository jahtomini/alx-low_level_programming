#include "main.h"
#include <stdio.h>

/**
  * main - A function that prints all arguments it receives
  *
  * @argc: number of args
  * @argv: array of args
  *
  * Return: nothing
  *
  */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

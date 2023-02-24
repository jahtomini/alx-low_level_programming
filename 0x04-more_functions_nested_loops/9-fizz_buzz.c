#include "main.h"
#include <stdio.h>

/**
  * print_square - Prints n squares according n number of times
  * @size: The number of squares/number of times
  *
  * Return: empty
  */

void fizz_buzz(void)
{
	int i = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}

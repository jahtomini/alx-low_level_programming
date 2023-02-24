#include "main.h"
#include <stdio.h>

/**
  * main - main
  * Description - Prints n squares according n number of times
  *
  * Return: empty
  *
  */


int  main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i);
		}
	}

	return (0);
}

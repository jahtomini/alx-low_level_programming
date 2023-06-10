#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: Number of arguments to the program.
 * @argv: Array of arguments as strings.
 *
 * Return: 0 if successful, else 1.
 */
int main(int argc, char *argv[])
{
	int amount, coins;
	(void)(argv);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
	}

	coins = 0;

	while (amount > 0)
	{
		/*
		 * can you subtract 25 safely? (non-negative difference)
		 * if yes, amount = amount - 25 and coins++
		 * if no, try using the next lowest denomination
		 * do this until amount == 0
		 *
		 */

		if ((amount - 25) >= 0)
		{
			amount = amount - 25;
			coins++;
		}
		else
		{
			if ((amount - 10) >= 0)
			{
				amount = amount - 10;
				coins++;
			}
			else
			{
				if ((amount - 5) >= 0)
				{
					amount = amount - 5;
					coins++;
				}
				else
				{
					if ((amount - 2) >= 0)
					{
						amount = amount - 2;
						coins++;
					}
					else
					{
						amount--;
						coins++;
					}
				}
			}
		}
	}

	printf("%i\n", coins);
	return (0);
}

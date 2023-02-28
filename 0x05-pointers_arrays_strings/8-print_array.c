#include "main.h"
#include <stdio.h>

/**
  * print_array - print_array
  * Description - print n elements of an array of integers
  * @a: the array being pointed at
  * @n: the number of elements to be printed
  *
  * Return: empty
  *
  */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%i, ", a[i]);
		} else
		{
			printf("%i", a[i]);
		}
	}
	_putchar('\n')
}

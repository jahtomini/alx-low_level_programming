#include "main.h"

/**
  * reverse_array - reverse_array
  * Description - Reverse the contents of an array of integers
  * @a: the array of integers
  * @n: the number of elements in the array
  *
  * Return: nothing
  *
  */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}

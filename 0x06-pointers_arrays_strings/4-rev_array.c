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
	int i = 0;
	int tmp;
	int j = n - 1;

	while (i < n/2)
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
		i++;
}

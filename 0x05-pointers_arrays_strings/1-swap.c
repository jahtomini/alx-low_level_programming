#include "main.h"
#include <stdio.h>

/**
  * swap - swap
  * Description - swap the values of two ints using their pointers
  * @*a: the first pointer
  * @*b: the second pointer
  *
  * Return: empty
  *
  */


void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	int tmp;

	tmp = c;
	*a = d;
	*b = tmp;
}

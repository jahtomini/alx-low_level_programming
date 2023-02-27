#include "main.h"
#include <stdio.h>

/**
  * swap_int - swap_int
  * Description - swap the values of two ints using their pointers
  * @a: the first int being pointed to
  * @b: the second int being pointed to
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

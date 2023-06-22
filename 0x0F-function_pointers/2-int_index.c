#include "function_pointers.h"

/**
 * int_index - Get the index of the first element that doesn't
 * return zero when used as input in the compare function
 *
 * @array: The array where the elements are stored.
 * @size: The size of the array.
 * @cmp: A pointer to the compare function.
 *
 * Return: The index of the element when found and -1
 * if none found or other error encountered.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

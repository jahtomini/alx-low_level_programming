#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that iterates over an array
 * and runs a function on all its elements.
 *
 * @array: The array to be iterated over.
 * @size: The size of the array.
 * @action: A pointer to the function that is
 * carried on the elements of the array.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array and initialize it with a specific char
 *
 * @size: The size of the array to be created.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the initialized array.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (int)size; i++)
	{
		array[i] = c;
	}

	return (array);
}

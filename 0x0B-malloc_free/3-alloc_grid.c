#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that creates a two-dimensional
 * array and returns a pointer to it.
 *
 * @width: The width of the two-dimensional array.
 * @height: The height of the two-dimensional array.
 *
 * Return: A pointer to a two-dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **array = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			free(array[i]);
			return (NULL);
		}
	}

	return (array);
}

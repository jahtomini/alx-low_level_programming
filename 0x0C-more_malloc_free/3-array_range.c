#include "main.h"
#include <stdlib.h>

/**
 * array_range - Allocate memory for an array of a particular number range.
 * @min: The smallest number in the range.
 * @max: The largest number in the range.
 *
 * Return: A pointer to the allocated memory.
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

 	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}

	return (ptr);
}

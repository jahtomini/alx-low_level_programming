#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - Allocate a portion of memory and initialise it.
 * @nmemb: The number of elements to be added.
 * @size: The individual size in bytes of each element to be added.
 *
 * Return: A pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

    memset(ptr, 0, (nmemb * size));

	return (ptr);
}

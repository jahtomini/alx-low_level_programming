#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - Allocate a section of memory
 * and check the success of the operation.
 * @b: Amount of memory to be allocated.
 *
 * Return: A pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

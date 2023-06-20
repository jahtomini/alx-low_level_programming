#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the memory allocated for a dog struct.
 * @d: A pointer to the dog struct.
 *
 * Return: Nothing.
*/
void free_dog(dog_t *d)
{
	free(d);
}

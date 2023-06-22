#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print the details of a dog struct.
 *
 * @d: A pointer to the dog sruct.
 *
 * Return: Nothing.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

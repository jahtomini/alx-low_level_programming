#include "dog.h"
#include <stdio.h>


/**
 * init_dog - Create a dog struct.
 *
 * @d: A pointer to the dog struct.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Return: Nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

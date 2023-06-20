#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create a dog struct using the dog_t typedef.
 * 
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 * 
 * Return: A pointer to the newly created dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    char *dog_name = name; 
    char *dog_owner = owner;
    dog_t *dog = malloc(sizeof (dog_t));

    if (dog == NULL)
    {
        return (NULL);
    }

    dog->name = dog_name;
    dog->owner = dog_owner;
    dog->age = age;

    return (dog);
}
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function to initialize variable of type struct dog
 * 
 * @d: dog
 * @name: Dog name
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

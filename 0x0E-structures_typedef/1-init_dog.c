#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function to initialize variable
 * 
 * @d: dog
 * @name: Dog name
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: 1 on Success, 0 Otherwise
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

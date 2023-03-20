#include "dog.h"
#include <stdio.h>

/**
 * free_dog - Frees the dog
 * @d: Dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

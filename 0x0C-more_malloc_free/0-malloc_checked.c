#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate mem using malloc
 * @b: Size to malloc
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

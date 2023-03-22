#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Function to search for an integer
 * @array: The array
 * @size: Size of the array
 * @cmp: Pointer to function
 * Return: Index to integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);

	return (-1);

}

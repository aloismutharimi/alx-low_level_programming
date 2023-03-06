#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints sum of two diagonals
 * @a: int
 * @size: int
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, z, w;

	z = 0;
	w = 0;
	for (i = 0; i < (size * size); i += size + 1)
	{
		z += a[i];
	}
	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		w += a[j];
	}
	printf("%d, %d\n", z, w);
}

#include <stdio.h>
#include "main.h"

/**
 * _strcat - Function to print and overwrite a string
 * @src: integer
 * @dest:integer
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int aux;

	for (i = 0, j = n - 1; i < n / 2; j--, i++)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}

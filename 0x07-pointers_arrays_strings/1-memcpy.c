#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Function to copy memory area
 * @dest: array of type char
 * @src: array of type char
 * @n: Unsigned int
 * Return: Value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

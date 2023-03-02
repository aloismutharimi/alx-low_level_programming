#include "main.h"
/**
 * _strncat - Entry point.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the string.
 *@n: int
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

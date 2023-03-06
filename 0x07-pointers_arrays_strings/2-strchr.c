#include <stdio.h>
#include "main.h"

/**
 * _strchr - Function to copy memory area
 * @s: Pointer
 * @c: Variable
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
				{
				return (s + x);
				}
				}
	if (s[x] == c)
	{
	return (s + x);
	}
	return (0);
}

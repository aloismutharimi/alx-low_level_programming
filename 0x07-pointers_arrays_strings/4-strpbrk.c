#include <stdio.c>
#include "main.h"

/**
 * _strpbrk - Function to search a string
 * @s: pointer
 * @accept: variable desing
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}

		if (s[i] == accept[j])

		{
			return (s + i);
		}
	}
	return (0);
}

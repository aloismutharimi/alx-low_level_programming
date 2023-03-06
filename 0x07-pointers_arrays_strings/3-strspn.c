#include <stdio.h>
#include "main.h"

/**
 * _strspn - Function to get length of a prefix substring
 * @accept: Pointer
 * @s: Pointer
 * Return: 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, z;

	for (i = 0; s[i] != '\0'; i++)
	{
		z = 2;

		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				z = 4;
				break;
			}
		}

		if (z == 2)
		{
			break;
		}
	}
	return (i);
}

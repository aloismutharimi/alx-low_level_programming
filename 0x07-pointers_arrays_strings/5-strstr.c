#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates a substring..
 * @haystack: String to be compared
 * @needle: Substring to be located
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, z;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (z = i, j = 0; needle[j] != '\0'; j++, z++)
		{
			if (haystack[z] != needle[j] || haystack[z] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}

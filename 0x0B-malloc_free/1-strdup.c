#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - Creates array
 * @str: String
 * Return: 0 (Success)
 */

char *_strdup(char *str)
{
	int i;
	int count;
	char *s;

	count = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	s = malloc(count);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count + 1; i++)
	{
		s[i] = str[i];
	}
	return (s);
}

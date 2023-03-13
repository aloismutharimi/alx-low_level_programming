#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Creates an array
 * @size: size of integer
 * @c: Initialize the array
 * Return: 0 (Success)
 */

char *create_array(unsigned int size, char c);
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *) malloc(sizeof(c) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	s[i] = '\0';
	return (s);
}

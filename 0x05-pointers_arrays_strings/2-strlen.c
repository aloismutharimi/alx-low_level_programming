#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The given string
 * Return: Length of string
 */

int _strlen(char *s)
{
	int str = 0;

	while (*(s + str) != '\0')
	{
		str++;
	}
	return (str);
}

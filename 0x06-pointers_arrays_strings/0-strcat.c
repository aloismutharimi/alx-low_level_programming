#include "main.h"

/**
 * _strcat - Entry point
 * @dest: Variable holding string
 * @src: Variable to hold string
 *
 * Return: 0 (Success)
 */
cahr *_strcat(char *dest, char *src)
{
	char *acz = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (acz);
}

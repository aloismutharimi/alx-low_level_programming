#include<stdio.h>
#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: char
 * @s2: char
 * Return: j.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}

#include "main.h"

/**
 * _strlen_recursion - Return length of the string
 * @s: String to reverse
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}

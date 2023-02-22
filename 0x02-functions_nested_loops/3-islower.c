#include "main.h"
/**
 * _islower - Checks whether character is lowercase
 * @c: Character to check
 * Return: 1 if 'c' is lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

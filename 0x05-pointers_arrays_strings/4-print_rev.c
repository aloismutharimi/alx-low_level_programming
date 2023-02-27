#include "main.h"

/**
 * print_rev - Prints reversed string
 * @s: The string to print
 */

void print_rev(char *s)
{
	int str = 0, index;

	while (s[index++])
		str++;

	for (index = str - 1; index >= 0; index --)
		_putchar(s[index]);

	_putchar('\n');
}

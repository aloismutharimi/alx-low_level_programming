#include <stdlib.h>
#include "main.h"

/**
 * _puts - Prints a string followed by new line
 * str - Given string
 */

void _puts(char *str)
{
	int msg;

	for (msg = 0; *(str + msg) != '\0'; msg++)
	{
		_putchar(str[msg]);
	}
	_putchar('\n');
}

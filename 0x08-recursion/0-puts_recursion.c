#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: String to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		putchar('\n');
	}
}

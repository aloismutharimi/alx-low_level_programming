#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints name
 * @name: Name to print
 * @f: Pointer to function
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

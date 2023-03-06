#include <stdio.h>
#include "main.h"

/**
 * set_string - Sets value of pointer to a char
 * @s: Pointer
 * @to: Poits to
 */

void set_string(char **s, char *to)
{
	*s = to;
}

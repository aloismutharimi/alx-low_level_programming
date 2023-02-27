#include <stdlib.h>
#include "main.h"

/**
 * swap_int - Swaps value of 2 integers
 * @a: First int to be swapped
 * @b: Second int to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

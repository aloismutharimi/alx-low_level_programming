#include "main.h"

/**
 * _pow_recursion - Return x raised to power y
 * @x: Number
 * @y: Power to raise to
 * Return X raised to power y, -1 if x is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

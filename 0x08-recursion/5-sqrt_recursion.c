#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to return square root
 * Return: -1 for number without square root
 */

int _sqrt_recursion(int n)
{
	float square_root(int, float);
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (square_root(n, 2));
}

/**
 * square_root - Return natural square root of number
 * @n: Number
 * @count: Number
 * Return: -1 if number has no square root
 */

float square_root(int n, float count)
{
	if ((count * count) > n)
	{
		return (-1);
	}
	if (n / count != count)
	{
		return (square_root(n, count + 1));
	}
	else
	{
		return (count);
	}
}

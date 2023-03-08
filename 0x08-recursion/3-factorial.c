#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Given number
 * Return: -1 to indicate error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 1)
		return (n);
	else
		return (n * factorial(n-1));
}

#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Function to add
 * @a: Integer
 * @b: Integer
 * Return: Result of sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to subtract
 * @a: Integer
 * @b: Integer
 * Return: Result
 */

int op_sub(int a, int b)
{
	return (a-b);
}

/**
 * op_mul - Function to multiply
 * @: Integer
 * @b; Integer
 * Return: Result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divide
 * @a: Integer
 * @b: Integer
 * Return: Result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function to return remainder
 * @a: Integer
 * @b: Integer
 * Return: Result
 */

int op_mod(int a, int b)
{
	return (a % b);
}

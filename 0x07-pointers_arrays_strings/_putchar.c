#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c: Character to print
 * Return: 0 (Success)
 * On error, return -1 and set errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

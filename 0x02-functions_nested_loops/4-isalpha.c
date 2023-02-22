#include "main.h"
/**
 * int _isalpha(int c) - Checks for alphabetic character
 * @c - Character to check
 * Return: 1 if c is letter, lowercase or uppercase, return 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

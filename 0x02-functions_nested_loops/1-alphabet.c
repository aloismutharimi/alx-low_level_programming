#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by new line
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphebet 10 times in lowercase, followed by new line
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char abc;
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		count++;
		_putchar('\n');
	}
}

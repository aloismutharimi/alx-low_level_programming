#include <stdio.h>
/**
 * main - Entry point
 * Return: 0.
 */
int main(void)
{
	char cba;

	for (cba = 'z'; cba >= 'a'; cba--)
		putchar(cba);
	putchar('\n');

	return (0);
}

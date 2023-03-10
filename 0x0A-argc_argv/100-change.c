#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- Program that prints the minimun number of coins to make change.
 * @argc: Integer
 * @argv: Character
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int change;
	int coins;

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change > 0)
	{
		if (change >= 25)
			change = change - 25;
		else if (change >= 10)
			change = change - 10;
		else if (change >= 5)
			change = change - 5;
		else if (change >= 2)
			change = change - 2;
		else
			change = change - 1;
		coins++;
	}
	printf("%i\n", coins);
	return (0);
}

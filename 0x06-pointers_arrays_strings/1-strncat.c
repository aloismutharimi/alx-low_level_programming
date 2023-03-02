#include "main.h"
/**
 * _strcat - Entry point.
 * @dest: Variable which will hold the string.
 * @src: Variable which holds the string.
 *@n: int
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *destPointer = dest;
	int len = 0;
<<<<<<< HEAD

=======
	
>>>>>>> 3c1083e98b5ae9753ad507965c407c65cd043487
	if (dest == 0)
	{
		return (0);
	}
	/*Lenght of string dest*/
	while (*dest)
	{
		len++;
		dest++;
	}
	dest = destPointer;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

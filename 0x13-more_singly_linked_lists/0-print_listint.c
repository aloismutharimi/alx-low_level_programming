#include "lists.h"

/**
 * print_listint - Prints elements of a list
 * @h: List
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		
		count_nodes += 1;
		h = h->next;
	}
	return (count_nodes);
}

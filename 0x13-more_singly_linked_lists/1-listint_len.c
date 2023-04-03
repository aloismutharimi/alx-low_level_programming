#include "lists.h"

/**
 * listint_len - Returns number of elements in linked list
 * @h: Linked list
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes += 1;
		h = h->next;
	}

	return (count_nodes);
}

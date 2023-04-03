#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a listint_t linked list
 * @head: Pointer to head of linked list
 * @index: Index of node
 * Return: nth node, or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (NULL);
}

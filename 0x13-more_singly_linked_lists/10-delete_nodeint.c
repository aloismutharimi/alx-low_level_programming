#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position
 * @head: Pointer to head of linked list
 * @index: Indext to node
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp1, *temp2

		if (*head == NULL)
			return (-1);

	temp1 = *head;

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	while (i < (index -1) && temp1 != NULL)
	{
		temp1 = temp1->next;
		i++;
	}

	if (i != (index - 1) || temp1 == NULL)
		return (-1);

	temp2 = temp1->next;
	temp1->next = (temp1->next)->next;
	free(temp2);

	return (1);
}


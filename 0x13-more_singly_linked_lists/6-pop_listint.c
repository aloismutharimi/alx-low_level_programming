#include "lists.h"

/**
 * pop_listint - Deletes head node and returns data
 * @head: Linked list
 * Return: Returns head node data
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	node_data = temp->n;

	*head = temp->next;
	free(temp);

	return(node_data);
}

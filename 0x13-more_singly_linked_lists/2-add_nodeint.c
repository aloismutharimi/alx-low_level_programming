#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of linked list
 * @head: Pointer to head of linked list
 * @n: Data to add to new node
 * Return: Address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

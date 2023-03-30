#include "lists.h"

/**
 * _strlen - Finds length of string
 * *str: String
 * Return: Length
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node Adds node to linked list
 * @head: linked list
 * @str: Data for next node
 * Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}

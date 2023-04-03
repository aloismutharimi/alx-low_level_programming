#include "lists.h"

/**
 * sum_listint - Returns sum of all data in listint_t list
 * @head: Pointer to head of linked list
 * Return: Sum
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

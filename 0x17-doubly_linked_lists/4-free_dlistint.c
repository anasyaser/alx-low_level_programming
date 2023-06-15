#include "lists.h"

/**
 * free_dlistint - free allocated memory used by linked list
 *
 * @head: pointer to first element of linked list
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
		return;
	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}

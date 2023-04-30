#include "lists.h"

/**
 * pop_listint - delete last node
 *
 * @head: pointer to head of list
 * Return: None
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp = *head;

	if (tmp == NULL)
		return (0);

	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}

#include "lists.h"

/**
 * free_listint2 - free memory allocation
 *
 * @head: pointer to head of list
 * Return: None
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (*head == NULL)
		return;
	while (tmp)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}

#include "lists.h"

/**
 * free_listint - free memory allocation
 *
 * @head: pointer to head of list
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	if (head == NULL)
		return;
	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

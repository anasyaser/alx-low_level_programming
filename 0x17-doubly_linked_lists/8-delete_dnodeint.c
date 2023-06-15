#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: pointer to pointer of list head
 * @index: required index of new node
 * Return: (int) 1 if success else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!current)
		return (-1);

	while (index)
	{
		current = current->next;
		if (!current)
			return (-1);
		index--;
	}
	if (!current->prev)
		*head = current->next;
	else
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}

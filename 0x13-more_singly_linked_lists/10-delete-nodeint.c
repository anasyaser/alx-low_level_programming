#include "lists.h"

/**
 * delete_nodeint_at_index - insert new node at given index
 *
 * @head: pointer to pointer of list head
 * @index: required index of new node
 * Return: (int) 1 if success else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev;

	if (!current)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (index)
	{
		prev = current;
		current = current->next;
		if (!current)
		{
			return (-1);
		}
		index--;
	}
	prev->next = current->next;
	free(current);
	return (1);
}

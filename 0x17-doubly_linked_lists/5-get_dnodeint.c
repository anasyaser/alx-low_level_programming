#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node
 *
 * @head: pointer to head of list
 * @index: required index
 * Return: pointer to required index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	if (!head)
		return (NULL);

	while (index)
	{
		current = current->next;
		index--;
		if (!current)
			return (NULL);
	}
	return (current);
}

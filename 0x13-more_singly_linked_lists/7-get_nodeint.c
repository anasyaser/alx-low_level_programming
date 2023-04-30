#include "lists.h"

/**
 * get_nodeint_at_index - return nth node
 *
 * @head: pointer to head of list
 * @index: required index
 * Return: pointer to required index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

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

#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given index
 *
 * @head: pointer to pointer of list head
 * @idx: required index of new node
 * @n: new node value
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
				     unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	if (idx == 0)
		return (add_dnodeint(head, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (idx > 1)
	{
		current = current->next;
		if (!current)
			return (NULL);
		idx--;
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}

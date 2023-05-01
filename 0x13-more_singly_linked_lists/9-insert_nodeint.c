#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given index
 *
 * @head: pointer to pointer of list head
 * @idx: required index of new node
 * @n: new node value
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	listint_t *prev;

	if (!current)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (idx)
	{
		prev = current;
		current = current->next;
		if (!current)
			return (NULL);
		idx--;
	}
	prev->next = new_node;
	new_node->next = current;

	return (new_node);
}

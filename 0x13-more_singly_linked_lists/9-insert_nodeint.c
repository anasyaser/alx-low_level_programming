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


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (idx)
	{
		prev = current;
		current = current->next;
		if (!current)
		{
			if (idx == 1)
			{
				prev->next = new_node;
				return (new_node);
			} else
				return (NULL);
		}
		idx--;
	}
	prev->next = new_node;
	new_node->next = current;

	return (new_node);
}

#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of list
 *
 * @head: pointer to head of elments
 * @n: node value
 * Return: pointer to new added value
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (!current)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;
	new_node->next = NULL;

	return (new_node);
}

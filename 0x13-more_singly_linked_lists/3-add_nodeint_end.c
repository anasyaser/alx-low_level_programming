#include "lists.h"

/**
 * add_nodeint_end - add node at the end of list
 *
 * @head: pointer to head of elments
 * @n: node value
 * Return: pointer to new added value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
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
	new_node->next = NULL;

	return (new_node);
}

#include "lists.h"

/**
 * add_nodeint - add node at beginning of list
 *
 * @head: pointer to head of elments
 * @n: node value
 * Return: pointer to new added value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

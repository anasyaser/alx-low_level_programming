#include "lists.h"

/**
 * add_node_end - add node to the end of linked list
 *
 * @head: address of pointer to the beginning of linked list
 * @str: new node content
 * Return: pointer to first node of linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	unsigned int len = 0;

	current = *head;

	while (*(str + len))
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (!current)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}

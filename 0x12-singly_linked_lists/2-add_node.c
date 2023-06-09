#include "lists.h"

/**
 * add_node - add node to the beginning of linked list
 *
 * @head: address of pointer to the beginning of linked list
 * @str: new node content
 * Return: pointer to first node of linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (*(str + len))
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

#include "lists.h"

/**
 * free_list - free allocated memory used by linked list
 *
 * @head: pointer to first element of linked list
 * Return: None
 */

void free_list(list_t *head)
{
	list_t *tmp = head;

	if (head == NULL)
		return;
	while (tmp != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}

}

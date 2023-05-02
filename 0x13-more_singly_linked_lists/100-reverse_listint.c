#include "lists.h"

/**
 * reverse_listint - reverese linked list
 *
 * @head: pointer to head of list
 * Return: pointer to first element of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	if (head == NULL)
		return (NULL);

	while (1)
	{
		next = (*head)->next;
		(*head)->next = prev;
		if (!next)
			return (*head);
		prev = *head;
		*head = next;
	}
}

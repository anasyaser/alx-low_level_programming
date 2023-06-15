#include "lists.h"

/**
 * sum_dlistint - sum all of list nodes
 *
 * @head: pointer to head of list
 * Return: (int) sum of all nodes values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

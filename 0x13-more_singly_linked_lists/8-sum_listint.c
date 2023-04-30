#include "lists.h"

/**
 * sum_listint - sum all of list nodes
 *
 * @head: pointer to head of list
 * Return: (int) sum of all nodes values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

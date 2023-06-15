#include "lists.h"


/**
 * dlistint_len - length of list elements
 *
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}

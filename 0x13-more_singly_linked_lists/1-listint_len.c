#include "lists.h"

/**
 * listint_len - length of list elements
 *
 * @h: pointer to head of elments
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}

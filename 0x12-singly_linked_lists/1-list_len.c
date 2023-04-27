#include "lists.h"

/**
 * list_len - calculate list length
 *
 * @h: pointer to list_t
 * Return: number of nodes in list_t
 */

size_t list_len(const list_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}

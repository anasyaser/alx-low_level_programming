#include "lists.h"

/**
 * print_listint - print all elements of listint_t
 *
 * @h: pointer to head of elments
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}

#include "lists.h"

/**
 * print_dlistint - print all doubl linked list elements
 * @h: pointer to header node
 * Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
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

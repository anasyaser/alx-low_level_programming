#include "lists.h"

/**
 * print_list - print all elements of list_t
 *
 * @h: pointer to list_t
 * Return: number of nodes in list_t
 */

size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		cnt++;
		h = h->next;
	}
	return (cnt);
}

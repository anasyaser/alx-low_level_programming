#include "lists.h"

int in_array(const listint_t **arr, const listint_t *val)
{
	int cnt = 0;
	if (!arr)
		return (0);
	while (arr[cnt])
	{
		if (arr[cnt] == val)
			return (1);
		cnt++;
	}
	return (0);
}

/**
 * print_listint_safe - print all elements of listint_t
 *
 * @head: pointer to head of elments
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t cnt = 0;
	const listint_t **add_arr = NULL;

	while (head && !(in_array(add_arr, head)))
	{
		add_arr = realloc(add_arr, sizeof(add_arr)*(cnt + 1));
		if (add_arr == NULL)
			exit (98);

		add_arr[cnt] = head;
		printf("[%p] %d\n",(void *)head, head->n);
		head = head->next;
		cnt++;
	}
	free(add_arr);
	return (cnt);
}

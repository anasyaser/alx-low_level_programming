#include "lists.h"

/**
 * in_array - check if pointer in array
 *
 * @arr: array of pointers
 * @val: pointer to check if exist
 * Return: (int) 1 if exist else 0
 */

int in_array2(listint_t **arr,listint_t *val)
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
 * free_listint_safe - free all elements of listint_t
 *
 * @head: pointer to head of elments
 * Return: number of free nodes
 */

size_t free_listint_safe(listint_t **head)
{
	size_t cnt = 0;
	listint_t *tmp = *head;
	listint_t **add_arr = NULL;

	while (tmp)
	{
		add_arr = realloc(add_arr, sizeof(add_arr) * (cnt + 1));
		if (add_arr == NULL)
			exit(98);

		add_arr[cnt] = tmp;
		tmp = tmp->next;
		cnt++;

		if (in_array2(add_arr, tmp))
		{
			break;
		}
	}
	free(add_arr);
	*head = NULL;
	return (cnt);
}

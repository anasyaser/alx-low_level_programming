#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strlen - return length of string
 *
 * @s: string to get its length
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * arr_len - calculate array of strings length
 *
 * @ac: number of arguments
 * @av: array of strings
 * Return: lenght of all charachters
 */

int arr_len(int ac, char **av)
{
	int result = 0;

	while (ac)
	{
		result += _strlen(*(av + ac - 1));
		ac--;
	}
	return (result);
}


/**
 * argstostr - concatenate all arguments
 *
 * @ac: argumnets counter
 * @av: arguments array
 * Return: pointer to one concatenating string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int total_len = arr_len(ac, av);
	int i = 0;
	int cur_len;
	int cur_cnt = 0;
	int j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = malloc((total_len + ac - 1) * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	while (cur_cnt < ac)
	{
		cur_len = _strlen(av[cur_cnt]);
		j = 0;

		while (j < cur_len)
		{
			ptr[i] = av[cur_cnt][j];
			i++;
			j++;
		}
		ptr[i] = '\n';
		i++;

		cur_cnt++;
	}
	ptr[i] = '\0';
	return (ptr);
}

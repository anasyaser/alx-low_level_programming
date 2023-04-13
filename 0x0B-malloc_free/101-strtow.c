#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * char_cnt - count number of given char in string
 *
 * @str: string to process
 * @s: string to count
 * Return: (int) number of words
 */

int char_cnt(char *str, char s)
{
	int res = 0;

	while (*str)
	{
		if (*str == s)
			res++;
		str++;
	}
	return (res);
}


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
 * nth_word - get nth word of string
 *
 * @s: string to process
 * @sep: word separator
 * @n: nth word to return
 * Return: substring of processed string
 */

char *nth_word(char *s, char sep, int n)
{
	int counter = 0;
	int sep_pos = 0;
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == sep)
		{
			sep_pos = i;
			n--;
		}
		if (n == 0)
			return s
	}
}

/**
 * strtow - convert string to separate words
 *
 * @str: string to be sepatated
 * Return: new separate words array
 */

 char **strtow(char *str)
{
	int no_word;
	int cur_sep_pos = -1;
	int cur_word = 0;
	int i = 0;
	char **ptr;
	/* ------------- */
	char *h_ptr;
	int len;

	if (!str)
		return (NULL);

	no_word = char_cnt(str, ' ') + 1;
	len = _strlen(str);

	ptr = (char **) malloc(no_word * sizeof(ptr));
	h_ptr = (char *) malloc(len * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);
/*
	while (cur_word < no_word)
	{
		if (*str == ' ')
		{
			ptr[cur_word] = (char *) malloc(sizeof(char)\
							* (i - cur_sep_pos));
			cur_sep_pos = i;
			cur_word++;
		}
		i++;
		str++;
	}
*/
	ptr[cur_word] = (char *) malloc()
	while (*str)
	{
		if ()
	}

}

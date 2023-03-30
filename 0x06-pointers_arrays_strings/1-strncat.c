#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate two strings based on n char
 * @des: string to concatenate to it
 * @src: string to concatenate
 * @n: n char to concatenate
 * Return: add string to des.
 */

char *_strncat(char *des, char *src, int n)
{
	int des_size = strlen(des);
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		des[des_size + i] = src[i];
		i++;
	}
	des[des_size + i] = '\0';
	return (des);
}

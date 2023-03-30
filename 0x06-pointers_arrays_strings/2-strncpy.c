#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copy nth chars from string to another
 * @des: string to copy to it
 * @src: string to copy from
 * @n: n of char to copy 
 * Return: add string to des.
 */

char *_strncpy(char *des, char *src, int n)
{

	int i = 0;

	while (i < n)
	{
		des[i] = src[i];
		i++;
	}

	return (des);
}

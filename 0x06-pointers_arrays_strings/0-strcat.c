#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenate two strings
 * @des: string to concatenate to it
 * @src: string to concatenate
 * Return: add string to des.
 */

char *_strcat(char *des, char *src)
{
	int des_size = strlen(des);
	int i = 0;

	while (src[i] != '\0')
	{
		des[des_size + i] = src[i];
		i++;
	}
	des[des_size + i] = '\0';
	return (des);

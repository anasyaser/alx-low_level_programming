#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * *_strcpy - copy string to destination pointer
 * @dest: destination pointer to copyt to it
 * @src: source string to be copied
 * Return: Pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}

/**
 * _strlen - calculae string length
 *
 * @s: string pointer
 * Return: (int) string length
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
 * new_dog - create new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(_strlen(name) + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	_strcpy(n_dog->name, name);

	n_dog->age = age;

	n_dog->owner = malloc(_strlen(owner) + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	_strcpy(n_dog->owner, owner);

	return (n_dog);
}

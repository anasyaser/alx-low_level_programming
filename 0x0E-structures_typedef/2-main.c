#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;



	my_dog.owner = "Bob";
	print_dog(&my_dog);
	return (0);

}

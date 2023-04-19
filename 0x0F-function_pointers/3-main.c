#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - simple calculator
 *
 * @argc: argument counter
 * @argv: array of program argumnets
 * Return: (int) result of operaion
 */

int main(int argc, char *argv[])
{
	int parm1, parm2;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	parm1 = atoi(argv[1]);
	parm2 = atoi(argv[3]);
	oper = argv[2];

	if (!get_op_func(oper) || oper[1] == '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oper == '/' && argv[3] == 0) || (*oper == '%' && argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
		}
	printf("%d\n", get_op_func(oper)(parm1, parm2));

	return (0);
}

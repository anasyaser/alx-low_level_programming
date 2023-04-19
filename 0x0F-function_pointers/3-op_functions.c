#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum two numbers
 *
 * @a: First number
 * @b: second number
 * Return: (int) sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - substract two numbers
 *
 * @a: First number
 * @b: second number
 * Return: (int) substract of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplication two numbers
 *
 * @a: First number
 * @b: second number
 * Return: (int) multiplication of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - division of two numbers
 *
 * @a: First number
 * @b: second number
 * Return: (int) division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - modulus division of two numbers
 *
 * @a: First number
 * @b: second number
 * Return: (int) modulus division of two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}

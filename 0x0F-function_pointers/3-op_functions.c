#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add-returns the sum of a and b
 * @a: int 1
 * @b: int 2
 * Return: sum a and b
 **/

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub-returns difference of a and b
 * @a: int 1
 * @b: int 2
 * Return: difference between a and b
 **/

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul-returns the product of a and b
 * @a: int 1
 * @b: int 2
 * Return: product of a and b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div-returns the result of a/b
 * @a: int 1
 * @b: int 2
 * Return: difference between a and b
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod- returns the remainder of the division of a and b
 * @a: int 1
 * @b: int 2
 * Return: remainder of a / b
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

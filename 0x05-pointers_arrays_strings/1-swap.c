#include "main.h"

/**
 * swap_int- swaps value of two integers
 * @a: pointer variable
 * @b: pointer variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}

#include "main.h"
#include <stdio.h>

/**
 * print_array- prints n elements of an array of integers
 * Must be followed by a new line
 * Numbers must be separated by comma, followed by a space
 * @a:point variable to integer n
 * @n: number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
				if (j != (n - 1))
				{
				printf(", ");
				}
	}
	printf("\n");
}

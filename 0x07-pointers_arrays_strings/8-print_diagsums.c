#include <stdio.h>

/**
 * print_diagsums- prints the sum of the two diagnals of a square matrix  of integers
 * @a: Pointer variable for the input
 * @sizesize of the array matrix to be used
 * Return: void-nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;
	int matrix = size * size;

	for (i = 0; i < matrix; i++)
	{
		if (i % (size + 1) == 0)
		{
			s1 += a[i];
		}
		if (i % (size -1) == 0 && i != 0  && i < matrix - 1)
		{
			s2 += a[i];
		}
	}
	printf("%d, %d \n", s1, s2);
}

#include "main.h"

/**
 * reverse_array-reverses the content of an array of integers
 * @a: pointer variable
 * @n:number of elements of the array
 * return: nothing
 */
void reverse_array(int *a, int n)
{
	int al, om, temp;

	al = 0;
	om = n - 1;

	while (al < om)
	{
		temp = a[al];
		a[al] = a[om];
		a[om] = temp;
		al++;
		om--;
	}
}

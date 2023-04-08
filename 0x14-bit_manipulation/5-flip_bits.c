#include "main.h"

/**
 * flip_bits-returns number of bitsto flip
 * to get from one number to another
 * @n: base number
 * @m: init number to flip
 * Return: numbers of bits needed to flip
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, result;

	result = 0;

	for (index = 8 * sizeof(n) - 1; index >= 0; index--)
	{
		if (((n ^ m) >> index) & 1)
			result++;
	}
	return (result);
}

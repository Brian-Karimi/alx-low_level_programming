#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: base number
 * @m: iniatal  number to flip
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int flip_bits = 0;

	while (mask != 0)
	{
		if (mask & 1)
		{
			flip_bits++;
		}
		mask >>= 1;
	}
	return (flip_bits);
}

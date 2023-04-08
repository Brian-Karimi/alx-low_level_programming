#include "main.h"

/**
 * clear_bit-sets the value of a bit to 0 at a given index
 * @n: input value
 * @index: specific index to clear_bit
 * Return: 1 if success or -1 if error
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= ~(1ul << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}

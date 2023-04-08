#include "main.h"

/**
 * get_bit-returns the value of a bot at a given index
 * @index: index for the targeted bit
 * @n: input for long int
 * Return: the value  of bit at index
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > 30) ? ((unsigned long int)(-1)) : ((n >> index) & 1));
}

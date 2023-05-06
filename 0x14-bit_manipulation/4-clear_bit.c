#include "main.h"

/**
 * clear_bit - stes bit value to 0 at defined index
 * @index: is the index to set bit value to zero
 * @n: pointer to input value -number of bytes
 * @n: pointer to input value -number of bytes
 * Return: 1 if success or -1 if erro
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	return ((index < sizeof(unsigned long int) * 8) ? (*n &= ~(1ul << index), 1) : -1);
}

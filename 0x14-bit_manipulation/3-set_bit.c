#include "main.h"

/**
 * set_bit-sets a value of a bit to 1 at a given index
 * @n: set int input value
 * @index: specified index in the bit
 * Return: 1 if success or -1 if error occured
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
return ((index > 30 || !n) ? (unsigned long int)-1 : (*n |= (1ul << index), 1));
}

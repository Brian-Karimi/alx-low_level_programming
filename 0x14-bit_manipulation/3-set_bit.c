#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: set integer input value
 * @index: index at which to set bit to 1
 * Return:  1 if success or -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
    if ( index > 30 || !n)
    {
        return (-1);
    }
    else
    {
        *n |= (1ul << index);
        return (1);
    }
}
#include "main.h"

/**
 * get_bit - returns the value of a bit at index
 * @n: long int input
 * @index: index to return its bit value
 * Return: value of bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 30)
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}

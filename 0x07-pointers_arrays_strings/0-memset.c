#include "main.h"

/**
 * _memset- fills memory with a constant byte
 * @s: pointer rto the to be filled memory and pointer to a char type
 * @b: character input variable to  fill s
 * @n: intgeger variable to ensure no negative input
 * store a no of bytes to be in  s
 * Return: @s: the pointer to the filled mmemory address in the pc
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

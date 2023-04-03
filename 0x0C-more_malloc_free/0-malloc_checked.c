#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- allocates memmory using malloc
 * @b: the number of bytes to be allocated
 * Return: pointer to the new memmory alocated
 **/

void *malloc_checked(unsigned int b)
{
	void *newMemory;

	newMemory = malloc(b);
	{
		if (newMemory == NULL)
		{
			exit(98);
		}
		else
		{
			return (newMemory);
		}
	}
}

#include "main.h"
#include <stdlib.h>

/**
 * _calloc- allocate memory for an array
 * @nmemb:number of bites to be allocated to the memory
 * @size: size of array
 * Return: void
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	mem = malloc(nmemb * size);
	
	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*(mem + 1) = 0;
	}
	return ((void *) mem);
}

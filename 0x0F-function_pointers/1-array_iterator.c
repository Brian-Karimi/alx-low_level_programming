#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator-function that executes a function given as a param
 * on each array element
 * @array:array to iterate
 * @size: array size
 * @action: pointer to the fucntion to be called
 * Return: nothing if @array and @action are NULL
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

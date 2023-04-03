#include "main.h"
#include <stdlib.h>

/**
 * array_range-creates an array of integers
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null if it fails
 **/
int *array_range(int min, int max)
{
	int *str;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	str = malloc(size * sizeof(int));
	{
		if (str == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size && min <= max; i++, min++)
		{
			*(str + i) = min;
		}
	}
	return (str);
}

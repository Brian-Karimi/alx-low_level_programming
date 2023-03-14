#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid-returns a pointer to a 2D in array
 * @width: input width
 * @height: input height
 * Return: array pointer or  NULL if false or if width
 * and height are <=0
 */
int **alloc_grid(int width, int height)
{
	int **matr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matr = malloc(height * sizeof(int *));

	if (matr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matr[i] = malloc(width * sizeof(int));

		if (matr[i] == NULL)
		{
			while (i >= 0)
			{
				free(matr[i]);
				i--;
			}
			free(matr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matr[i][j] = 0;
		}
	}
	return (matr);
}

#include "main.h"
#include <stdlib.h>

/**
 * free_grid- free a 2D grid created by allloc_grid
 * @grid: Double pointer to the 2D matrix
 * @height: input height of the matrix
 * Return: nothing
 **/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - free grid
* @grid: pointer to a pointer int.
* @height: int
**/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}

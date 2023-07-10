#include "main.h"
#include <stdlib.h>

/**
  * free_grid - freeing a grid ...
  * @grid: freeing a greed...
  * @height: height of the grid...
  *
  * Return:return val ...
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}


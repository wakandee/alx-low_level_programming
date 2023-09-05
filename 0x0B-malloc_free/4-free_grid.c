#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function that concatenates all the arguments of your program ...
  * @grid: ...
  * @height: ...
  *
  * Return: Returns a pointer to a new string, or NULL if it fails
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

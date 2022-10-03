#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - free the grid from memory
 * @grid: a pointer to arrays
 * @height: int height of grid
 *
 * Description: a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
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

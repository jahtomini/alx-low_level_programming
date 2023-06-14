#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free the allocated memory created for a 2-D array.
 *
 * @grid: A pointer to the 2-D array.
 * @height: The height of the grid (2-D array).
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

#include <stdlib.h>

/**
 * free_grid - frees the grid
 * @grid: grid to free
 * @gheight: grid height
 */
void free_grid(int **grid, int gheight)
{
	int i;

	for (i = 0; i < gheight; i++)
		free(grid[i]);
	free(grid);
}

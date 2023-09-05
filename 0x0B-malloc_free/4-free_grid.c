#include "main.h"

/**
 * free_grid - frees a grid's allocated space
 * @height: the height of the grid
 * @grid: the grid
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

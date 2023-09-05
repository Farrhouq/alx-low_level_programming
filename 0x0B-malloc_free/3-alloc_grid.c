#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: the width of the array
 * @height: the height of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j, *row, *ptr, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(ptr) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	i = 0;
	for (i = 0; i < height; i++)
	{
		row = malloc(sizeof(int) * width);
		if (row == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			row[j] = 0;
		grid[i] = row;
	}
	return (grid);
}

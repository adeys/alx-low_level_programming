#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * free_grid - frees a 2d grid
 * @grid: grid to free
 * @height: array height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i])
			free(grid[i]);
	}

	free(grid);
}

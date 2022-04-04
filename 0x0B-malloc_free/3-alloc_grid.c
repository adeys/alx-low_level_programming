#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _memset - Fills the memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: byte to use to fill the memory
 * @n: first number of bytes to fill
 * Return: pointer to the memory area
 */
int *_memset(int *s, int b, int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: array width
 * @height: array height
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			for (j = 0; j <= i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}

		_memset(grid[i], 0, width);
	}

	return (grid);
}

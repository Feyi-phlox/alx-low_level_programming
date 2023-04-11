#include "main.h"

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 *@width: width of grid
 *@height: height of grid
 * Return: pointer or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int r;
	int c;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		grid[r] = malloc(sizeof(int) * width);
		if (grid[r] == NULL)
		{
			for (c = 0; c <= r; c++)
				free(grid[c]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}

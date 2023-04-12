#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid - frees the 2 dimensional grid in 3
 *@grid: 2 dimensional to free
 *@height: height of the grid
 *
 *Return: 0
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

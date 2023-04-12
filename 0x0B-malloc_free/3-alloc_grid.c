#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integer
 *@width: size widthof the gride
 *@height:height of the grid
 * Return: pointer or 0 on success
 */
int **alloc_grid(int width, int height)
{
	int **tat;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	tat = malloc(sizeof(int *) * height);

	if (tat == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		tat[x] = malloc(sizeof(int) * width);

		if (tat[x] == NULL)
		{
			for (; x >= 0; x--)
				free(tat[x]);
			free(tat);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			tat[x][y] = 0;
	}
	return (tat);
}

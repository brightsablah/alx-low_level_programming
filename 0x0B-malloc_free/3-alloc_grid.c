#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* alloc_grid - allocates memmory for 2s array
* Description:
* @width: witdth of array
* @height: height of array
* Return: pointer to 2d array
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = (int **)(malloc(width * sizeof(int)));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)(malloc(height * sizeof(int)));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

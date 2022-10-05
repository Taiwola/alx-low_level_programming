#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - makes array dynamic
 * @col: numbers of columns of the array
 * @rows: number of rows of the array
 * Return: NULL
 */



int **alloc_grid(int col, int rows)
{
	int i, j,  **grid;

	grid = malloc(rows * sizeof(*grid));

	if (row < 1 || col < 1 || grid == 0)
		return (NULL);

	for (i = 0; i < row; i++)
	{
		grid[i] = malloc(col * sizeof(**grid));
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < col; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

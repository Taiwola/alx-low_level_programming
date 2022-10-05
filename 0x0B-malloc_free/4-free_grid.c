#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: pointer
 * @rows: array
 * Return: void
 */

void free_grid(int **grid, int rows)
{
	int i;

	for (i = 0; i < rows; i++)
		free(grid[i]);
	free(grid);
}

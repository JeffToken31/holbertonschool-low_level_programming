#include <stdlib.h>
#include "main.h"

/**
 *free_grid - to free a bidimensional array
 *@grid: pointer of array to free
 *@height: number of lines
 *Return: no return
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

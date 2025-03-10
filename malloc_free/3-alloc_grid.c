#include <stdlib.h>
#include "main.h"

/**
 ***alloc_grid - to return a bidimensional array
 *@width: number of lines
 *@height: number of culumns
 *Return: bidimensional array
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **ptr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int*));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (;j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}

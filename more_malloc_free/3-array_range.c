#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 **array_range - to return an array
 *@min: size min of array
 *@max: size max of array
 *Return: an array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = min; i < max + 1; i++)
		array[i] = i;
	return (array);
}

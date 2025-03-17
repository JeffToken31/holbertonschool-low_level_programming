#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index - return location of int if is shearched
 *@array: pointer array
 *@size: size of array
 *@cmp: call pointer function
 *Return: location of int in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

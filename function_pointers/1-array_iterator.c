#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - iterate an array
 *@array: pointer array
 *@size: size of array
 *@action: call pointer function
 *return: just iterate an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		exit(-1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

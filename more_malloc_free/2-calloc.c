#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 **_calloc - to allocate memomry for an array
 *@nmemb: height of array
 *@size: size to allocate per nmemb
 *Return: an allocation memory to an array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *str;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	str = calloc(nmemb, sizeof(int));
	if (str == NULL)
		return (NULL);
	return (str);
}

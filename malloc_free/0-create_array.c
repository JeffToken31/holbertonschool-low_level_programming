#include <stdlib.h>
#include "main.h"

/**
 **create_array - use malloc to create an array
 *@size: lenght of array
 *@c: char to plant in array
 *Return: a array of char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(c));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}

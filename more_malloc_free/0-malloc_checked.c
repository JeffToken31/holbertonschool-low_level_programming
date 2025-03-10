#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - to allocates memory using malloc
 *@b: size of memory allocation
 *Return: pointer to allocate memory
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b * sizeof(char));
	if (str == NULL)
		exit(98);
	return (str);
}

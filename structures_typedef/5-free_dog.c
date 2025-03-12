#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *free_dog - to free memory allocate dynamicly
 *@d : struct to free data
 *Return: just free data of strut
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

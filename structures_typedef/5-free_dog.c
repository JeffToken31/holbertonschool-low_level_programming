#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *free_dog - To free dynamically allocated memory
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

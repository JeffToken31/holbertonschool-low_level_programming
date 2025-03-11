#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *print_dog - to print data of struct
 *@d : struct to print data
 *Return: just print data of strut
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
	}
}

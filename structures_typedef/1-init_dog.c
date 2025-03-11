#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 *init_dog - to update a struct
 *@d: pointer of struct
 *@name: char to update in d->name
 *@age: age to update in d->age
 *@owner: char to update in d->owner
 *Return: just update strut
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i, j;

	if (d == NULL)
		exit(-1);
	if (name == NULL || owner == NULL)
		exit(-1);

	for (i = 0; name[i]; i++)
	{}
	for (j = 0; owner[j]; j++)
	{}
	d->name = malloc(i + 1);
	if (d->name == NULL)
		exit(-1);
	d->owner = malloc(j + 1);
	if (d->owner == NULL)
		exit(-1);
	for (i = 0; name[i]; i++)
	{
		d->name[i] = name[i];
	}
	i++;
	d->name[i] = '\0';
	for (j = 0; owner[j]; j++)
	{
		d->owner[j] = owner[j];
	}
	d->owner[j] = '\0';
	d->age = age;
}

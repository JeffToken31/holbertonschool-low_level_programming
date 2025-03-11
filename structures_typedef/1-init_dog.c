#include <stdlib.h>
#include "main.h"
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
	if (d == NULL)
		exit(-1);
	if (name == NULL || age == 0 || owner == NULL)
		exit(-1);

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
		exit(-1);
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
		exit(-1);
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}

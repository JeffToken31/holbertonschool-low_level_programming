#include <stdlib.h>
#include "dog.h"

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
	if (d != NULL)
	{
		if (name != NULL)
			d->name = name;
		if (owner != NULL)
			d->owner = owner;
		d->age = age;
	}
}

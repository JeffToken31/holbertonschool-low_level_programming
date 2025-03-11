#include <stdlib.h>
#include "dog.h"

/**
 * dog_t *new_dog - to create a new dog
 *@name: char to update in d->name
 *@age: age to update in d->age
 *@owner: char to update in d->owner
 *Return: just update strut
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
	{}
	new_dog->name = malloc(i + 1);
	if (new_dog->name == NULL)
		free(new_dog->name);
		return (NULL);

	for (j = 0; owner[j]; j++)
	{}
	new_dog->owner = malloc(j + 1);
	if (new_dog->owner == NULL)
		free(new_dog->owner);
		return (NULL);

	for (i = 0; name[i]; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i++] = '\0';

	for (j = 0; owner[j]; j++)
		new_dog->owner[j] = owner[j];
	new_dog->owner[j++] = '\0';
	new_dog->age = age;

	return (new_dog);
}

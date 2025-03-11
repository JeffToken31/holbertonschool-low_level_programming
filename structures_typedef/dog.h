#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct to reference dogs
 * @name: dog name
 * @age: age of dog
 * @owner: name of owner dog
 *
 * Description: to reference dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/*
*init_dog - to update a struct
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 *print_dog - to print data of struct
 *@d : struct to print data
 */
void print_dog(struct dog *d);
#endif

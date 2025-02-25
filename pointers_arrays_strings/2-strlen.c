#include "main.h"

/**
 *_strlen - to modifie value of variable with pointer
 *@c: pointer type char
 *Return: 0 if success
 */
int _strlen(char *s)
{
	int size;

	size = 1;
	for (; size <= *s;)
	{
		size++;
	}
	return (size / 5 + 1);
}

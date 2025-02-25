#include "main.h"

/**
 *_strlen - to modifie value of variable with pointer
 *@s: pointer type char
 *Return: 0 if success
 */
int _strlen(char *s)
{
	int element_of_array;

	for (element_of_array = 0; s[element_of_array];)
	{
		element_of_array++;
	}
	return (element_of_array);
}

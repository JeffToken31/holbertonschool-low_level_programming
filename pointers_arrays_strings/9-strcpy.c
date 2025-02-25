#include "main.h"
#include <stdio.h>

/**
 **_strcpy - to copy a string in other variable
 *@dest: pointer type char
 *@src: pointer type char
 *Return: char returned
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest);
}

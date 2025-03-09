#include "main.h"

/**
 **_strncpy - to copy a string in otherr variable
 *@dest: pointer type char
 *@src: pointer type char
 *@n: type int
 *Return: *char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n; j++)
	dest[j] = '\0';

	return (dest);
}

#include "main.h"

/**
 **_strncat - to concatenat one char in other
 *@dest: pointer type char
 *@src: pointer type char
 *@n: type int
 *Return: *char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}

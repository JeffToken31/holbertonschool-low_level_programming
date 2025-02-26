#include "main.h"

/**
 **_strcat - to concatenat one char in other
 *@dest: pointer type int
 *@src: pointer type int
 *Return: *char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i]; i++)
	;
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

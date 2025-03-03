#include "main.h"
#include <stdio.h>

/**
 **_strstr - search a string int other
 * @s: variable to set
 * @accept: char to start of
 * Return: char *s
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j] && haystack[i + 1] == needle[j + 1])
			{
				return (haystack + i);
			}
		}
	}

	return (NULL);
}

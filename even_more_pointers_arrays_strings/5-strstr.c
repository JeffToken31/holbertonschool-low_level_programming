#include "main.h"
#include <stdio.h>

/**
 **_strstr - search a string int other
 * @haystack: variable to set
 * @needle: char to start of
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
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}

#include "main.h"
#include <stdio.h>

/**
 **_strpbrk - print string at start at accept
 * @s: variable to set
 * @accept: char to start of
 * Return: char *s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}

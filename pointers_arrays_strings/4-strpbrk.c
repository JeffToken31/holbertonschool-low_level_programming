#include "main.h"
#include <stdio.h>

/**
 **_strpbrk - prints print string at start at accept
 * @s: variable to set
 * @accept: char to start of
 * Return: unsigned int
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				s = accept;
		}
	}
	return (s);
}

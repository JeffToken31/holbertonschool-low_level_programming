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
	char *str = s;

	if (str == NULL || accept == NULL)
	{
		str = NULL;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (str[i] == accept[j])
			{
				return (str + 1);
				break;
			}
		}
		str++;
	}
	return (NULL);
}

#include "main.h"
#include <stdio.h>

/**
 * *_strspn - prints number of s = accept
 * @s: variable to set
 * @accept: char to star of
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] && accept[i])
	{
		if (s[i] == '\0' || accept[i] == '\0')
		{
			return(i);
		}
		if (s[i] == accept[i])
		{
			return (i + 1);
		}
		i++;
	}
	return (i + 1);
}

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
	int j;
	int is_same;

	for (; s[i] != '\0'; i++)
	{
		is_same = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				is_same = 1;
				break;
			}
		}
		if (is_same == 0)
			break;
	}
	return (i);
}

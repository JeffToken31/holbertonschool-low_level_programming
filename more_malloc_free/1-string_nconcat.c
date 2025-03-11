#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 **string_nconcat - to concatenate one string more one part of other string
 *@s1: char to allocate entire
 *@s2: char to allocate entire or partialy
 *@n: length to keep for return
 *Return: char concatened
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; j < n; j++)
	{}
	str = malloc(i + j + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdlib.h>
#include "main.h"

/**
 **str_concat - to concatenate two strings with dynamic allocation
 *@s1: char to concatenate
 *@s2: char to concatenate
 *Return: a string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

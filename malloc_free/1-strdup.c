#include <stdlib.h>
#include "main.h"

/**
 **_strdup - to duplicate a string with malloc
 *@str: char to duplicate
 *Return: a string
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(i + 1 * sizeof(str));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}

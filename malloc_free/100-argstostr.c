#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **argstostr - to concatenate arguments
 *@ac: lenght of string
 *@av: the string
 * Return: string concatenate
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, j, k;
	int len = 0;

	if (av == NULL || ac < 1)
		return (NULL);

	while (av[i])
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
		i++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (av[i])
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

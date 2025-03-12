#include <stdlib.h>
#include "main.h"

/**
 ***strtow - split string to words
 *@str: string
 *Return: string splited
 */

char **strtow(char *str)
{
	int i, j = 0, k;
	int len = 0;
	int len_world = 0;
	char **s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
			len++;
	}
	s = malloc(sizeof(char *) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			while (str[i + len_world] != ' ' && str[i + len_world] != '\0')
				len_world++;

			s[j] = malloc(len_world + 1);
			if (s[j] == NULL)
			{
				free(s);
				return (NULL);
			}
			for (k = 0; k < len_world; k++)
			{
				s[j][k] = str[i + k];
			}
			s[j][k++] = '\0';
			i += len_world;
			j++;
		}
	}
	return (s);
}

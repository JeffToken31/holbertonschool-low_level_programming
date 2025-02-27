#include "main.h"

/**
 **_strcmp -to count diiference between 1st character 2 variable
 *@s1: pointer type char
 *@s2: pointer type char
 *Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;


	for (i = 0; s1[i]; i++)
	;
	for (j = 0; s2[j]; j++)
	;

	if (i < j)
	{
		return (*s1 - *s2);
	}
	else if (i == j)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

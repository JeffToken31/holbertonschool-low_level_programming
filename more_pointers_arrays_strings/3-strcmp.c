#include "main.h"

/**
 **_strcmp -to count diiference between 1st character 2 variable
 *@s1: pointer type char
 *@s2: pointer type char
 *Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int sortie;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;

	sortie = (s1[i] != s2[i]) ? (s1[i] - s2[i]) : 0;

	return (sortie);
}

#include "main.h"
#include <stdio.h>

/**
 **infinite_add - to addition 2 numbers withou stock in memory
 *@*n1: type char *
 *@*n2: type char *
 *@*r: type char *
 *@*size\r: type int
 *Return: no needed
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	i = 0;
	j = 0;

	while(n1[i - '0'] != '\0')
		i++;
	while(n2[j - '0'] != '\0')
		j++;

	r[size_r] = (n1[i ]) + (n2[i]);

	return (r);
}

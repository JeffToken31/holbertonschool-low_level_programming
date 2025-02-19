#include "main.h"
#include <stdio.h>

/**
 *main - print sum of natural number
 *@: no need
 *Return: no need
 */
int main(void)
{
	int nbrmul3, nbrmul5, sumof3, sumof5, sumall, i;

	for (i = 1024; i > 0;)
	{
		if (i % 3 != 0)
		{
			i--;
		}
		else
		{
			nbrmul3 = i;
			i = 0;
		}
	}
	for (i = 1024; i > 0;)
	{
		if (i % 5 != 0)
		{
		i--;
		}
		else
		{
			nbrmul5 = i;
			i = 0;
		}
	}
	sumof3 = nbrmul3 * (3 + (nbrmul3 * 3)) / 2;
	sumof5 = nbrmul5 * (5 + (nbrmul5 * 5)) / 2;
	sumall = sumof3 + sumof5;
	printf("%d\n", sumall);
	return (0);
}

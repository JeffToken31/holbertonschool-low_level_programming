#include "main.h"
#include <stdio.h>

/**
 *main - print sum of natural number
 *@: no need
 *Return: no need
 */
int main(void)
{
	int nbrmul3, nbrmul5, nbrmul15, sumof3, sumof5,sumof15, sumall, i;

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
	for (i = 1024; i > 0;)
        {
                if (i % 15 != 0)
                {
                i--;
                }
                else
                {
                        nbrmul15 = i;
                        i = 0;
                }
        }
	sumof3 = nbrmul3 / 3 * (3 + nbrmul3) / 2;
	sumof5 = nbrmul5 / 5 * (5 + nbrmul5) / 2;
	sumof15 = nbrmul15 / 15 * (15 + nbrmul15) / 2;
	sumall = sumof3 + sumof5 - sumof15;
	printf("%d\n", sumof3);
	printf("%d\n", sumof5);
	printf("%d\n", sumof15);
	printf("%d\n", sumall);
	return (0);
}

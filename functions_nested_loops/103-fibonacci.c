#include "main.h"
#include <stdio.h>

/**
 *main - print sum of natural number
 *@: no need
 *Return: no need
 */
int main(void)
{
	long int a, b, c, i, sum;

	a = 1;
	b = 2;
	c = 0;
	printf("%ld", b);
	for (i = 0; i < 48;)
	{
		c = a + b;
		if (b % 2 == 0 && b < 4000000)
                {
                	sum += b;
                }
		a = b;
                b = c;
		i++;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}

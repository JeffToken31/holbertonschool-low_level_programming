#include "main.h"
#include <stdio.h>

/**
 *main - print sum of natural number
 *@: no need
 *Return: no need
 */
int main(void)
{
	long int a, b, c, sum;

	a = 1;
	b = 2;
	c = 0;
	sum = 2;
	while (c < 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}

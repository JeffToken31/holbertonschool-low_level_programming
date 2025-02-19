#include "main.h"
#include <stdio.h>

/**
 *main - print sum of natural number
 *@: no need
 *Return: no need
 */
int main(void)
{
	unsigned long int a, b, c, i;

	a = 1;
	b = 2;
	printf("%lu", a);
	printf(", %lu", b);
	for (i = 0; i < 98;)
	{
		c = a + b;
		a = b;
		b = c;
		i++;
		printf(", %lu", c);
	}
	printf("\n");
	return (0);
}

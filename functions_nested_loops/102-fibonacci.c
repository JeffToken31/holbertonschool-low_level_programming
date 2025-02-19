#include "main.h"
#include <stdio.h>

/**
 *main - print sum of natural number
 *@: no need
 *Return: no need
 */
int main(void)
{
	long int a, b, c, i;

	a = 1;
	b = 2;
	printf("%ld", a);
	printf(", %ld", b);
	for (i = 0; i < 48;)
	{
		c = a + b;
		a = b;
		b = c;
		i++;
		printf(", %ld", c);
	}
	printf("\n");
	return (0);
}

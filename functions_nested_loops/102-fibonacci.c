#include "main.h"
#include <stdio.h>

/**
 *main - print sum of natural number
 *@: no need
 *Return: no need
 */
int main(void)
{
	unsigned int a, b, c, i;

	a = 1;
	b = 2;
	printf("%u", a);
	printf(", %u", b);
	for (i = 0; i < 48;)
	{
		c = a + b;
		a = b;
		b = c;
		i++;
		printf(", %u", c);
	}
	printf("\n");
	return (0);
}

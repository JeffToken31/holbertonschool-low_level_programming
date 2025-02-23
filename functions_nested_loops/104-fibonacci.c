#include "main.h"
#include <stdio.h>

/**
 *main - print sum of natural number
 *@: no need
 *Return: no need
 */
int main(void)
{
	unsigned long last_a = 1, a = 2, next_a;
	unsigned long last_b = 0, b = 0, next_b, c;
       	int i;

	printf("%lu", last_a);
	printf(", %lu", a);

	for (i = 3; i <= 92;)
	{
		next_a = last_a + a;
		last_a = a;
		a = next_a;
		i++;
		printf(", %lu", next_a);
	}

	for (; i <= 100; i++)
	{
		c = (last_a + a) / 1000000000;
		next_a = (last_a + a) % 1000000000;
		next_b = last_b + b + c;
		printf(", %lu%9lu", next_b, next_a);

		last_b = b;
		last_a = a;
		b = next_b;
		a = next_a;
	}

	printf("\n");
	return (0);
}

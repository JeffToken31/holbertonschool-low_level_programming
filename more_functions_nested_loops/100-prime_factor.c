#include "main.h"
#include <stdio.h>

/**
 *main - print largest factor of number
 *@: no need
 *Return: 0 if sucess
 */
int main(void)
{
	long number, divid;

	number = 612852475143;
	divid = 3;

	for (; divid * divid <= number;)
	{
		if (number % divid != 0)
			divid += 2;
		else
		{
			number /= divid;
		}
	}
	printf("%ld\n", number);
	putchar('\n');
	return (0);
}

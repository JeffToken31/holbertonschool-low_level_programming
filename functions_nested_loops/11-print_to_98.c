#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - is to all numbers still 98
 *@n: type int
 *Return: no need
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98;)
		{
			printf("%d, ", n);
			n--;

			if (n == 98)
			{
				printf("%d\n", n);
				n--;
			}
		}
	}
	else if (n < 98)
	{
		for (; n < 98;)
		{
			printf("%d, ", n);
			n++;

			if (n == 98)
			{
				printf("%d\n", n);
				n++;
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}

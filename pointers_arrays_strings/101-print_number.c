#include "main.h"
#include <stdio.h>

/**
 *print_number - to print number with _putchar
 *@n: type int
 *Return: no needed
 */
void print_number(int n)
{
	int i;
	int divis = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = n;
	while (i / 10)
	{
		i /= 10;
		divis *= 10;
	}
	while (divis > 0)
	{
		_putchar('0' + (n / divis) % 10);
		divis /= 10;
	}
}

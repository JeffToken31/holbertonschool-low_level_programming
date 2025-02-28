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

	if (n == -2147483648)
		n = -n / 10;
	else if (n < 0)
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
	if (n == -2147483648)
		_putchar('8');
}

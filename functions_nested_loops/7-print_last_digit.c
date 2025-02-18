#include "main.h"

/**
 *print_last_digit - is to last digit of number
 *@n: arg type int
 *Return: 0 if correct
 */
int print_last_digit(int n)
{
	int lastd;

	if (n < 0)
	{
		n = -n;
	}
	
	lastd = n % 10;
	_putchar('0' + lastd);
	return (lastd);
}

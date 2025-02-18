#include "main.h"

/**
 *print_last_digit - is to last digit of number
 *@n: arg type int
 *Return: lastd if correct
 */
int print_last_digit(int n)
{
	int lastd;

	if (n < 0)
	{
		n = -n;
	}	
	lastd = n % 10;

	return (_putchar('0' + lastd));
}

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
		n = n * -1;
	}	
	lastd = n % 10;
	_putchar('0' + lastd);
	return (lastd);
}

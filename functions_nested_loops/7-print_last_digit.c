#include "main.h"

/**
*print_last_digit - is to last digit of number
*@n: arg type int
*Return: 0 if correct
*/
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		return (lastdigit = n % -10);
	}
	else
	{
		return (lastdigit = n % 10);
	}
	_putchar(48 + lastdigit);
	return (0);
}

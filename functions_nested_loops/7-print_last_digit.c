#include "main.h"

/**
*print_last_digit - is to last digit of number
*@n: arg type int
*Return: 0 if correct
*/
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	_putchar(lastdigit + 48);
	return (0);
}

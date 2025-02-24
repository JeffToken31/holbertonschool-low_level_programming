#include "main.h"

/**
 *print_number - to list big numbers with _putchar
 *@n: arg type int
 *Return: no need
 */
void print_number(int n)
{
	if (n == 0)
		_putchar(48);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n != 0)
	{
		_putchar(n / 10 + 48);
		n /= 10;
	}
}

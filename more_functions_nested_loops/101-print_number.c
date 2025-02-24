#include "main.h"

/**
 *print_number - to list big numbers with _putchar
 *@n: arg type int
 *Return: no need
 */
void print_number(int n)
{
	if (n < 10 && n > -10)
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}
			_putchar(n + 48);
	}
	else if ((n < 100 && n > 10) || (n > -100 && n < -10))
	{
		if (n < -10)
		{
			n = -n;
			_putchar('-');
		}
			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
	}
	else if ((n < 1000 && n > 100) || (n > -1000 && n < -100))
	{
		if (n < -100)
		{
			n = -n;
			_putchar('-');
		}
		_putchar(n / 100 + 48);
		_putchar((n / 10) % 10 + 48);
		_putchar(n % 10 + 48);
	}
	else
	{
		if (n < -1000)
		{
			n = -n;
			_putchar('-');
		}
		_putchar(n / 1000 + 48);
		_putchar((n / 100) % 10 + 48);
		_putchar((n / 10) % 10 + 48);
		_putchar(n % 10 + 48);
	}
}

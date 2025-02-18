#include "main.h"

/**
*print_sign - is to check and return if is positive
*@n: arg type int
*Return:1 is true
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

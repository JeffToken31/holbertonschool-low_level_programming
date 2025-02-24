#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - print digit without 2 and 4
 *Return: no needed
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = 48; digit <= 57;)
	{
		if (digit == 50 || digit == 52)
		{
			digit++;
		}

		else
		{
			_putchar(digit);
			digit++;
		}
	}
	_putchar('\n');
}

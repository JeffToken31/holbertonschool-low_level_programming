#include "main.h"

/**
 *print_most_numbers - print digit without 2 and 4
 *Return: no needed
 */
void print_most_numbers(void)
{
	int digit = 48;

	for (; digit <= 57;)
	{
		if (digit == 59 || digit == 61)
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

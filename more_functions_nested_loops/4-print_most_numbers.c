#include <stdio.h>

/**
 *print_most_numbers - print digit without 2 and 4
 *Return: 0 if correct
 */
void print_most_numbers(void)
{
	int digit = 48;

	for (; digit <= 57; digit++)
	{
		if (digit == 59 || digit == 61)
		{
		}
		else
		{
		putchar(digit);
		}
	}
	putchar('\n');
	return (0);
}

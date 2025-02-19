#include "main.h"

/**
 *print_times_table - is to list all minutes in a day
 *@n: arg type int
 *Return: no need
 */
void print_times_table(int n)
{
	int table,  multiplier, result;

	if (n > 0 && n < 16)
	{
		for (table = 0; table < (n + 1);)
		{
			for (multiplier = 0; multiplier < (n + 1);)
			{
				result = multiplier * table;
				if (multiplier == 0)
				{
				_putchar(result + 48);
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + 48);
				}
				else if (result > 99)
				{
				_putchar(result / 100 + 48);
				_putchar((result / 10) % 10 + 48);
				_putchar(result % 10 + 48);
				}
				else
				{
				_putchar(' ');
				_putchar(result / 10 + 48);
				_putchar(result % 10 + 48);
				}}
				multiplier++;
			}
			_putchar('\n');
			table++;
		}}}

#include "main.h"

/**
 *times_table - is to list all minutes in a day
 *@:
 *Return: no need
 */
void times_table(void)
{
	int table;

	for (table = 0; table < 10;)
	{
		int multiple;

		for (multiple = 0; multiple < 10; multiple++)
		{
			int result = table * multiple;

			if (multiple == 0)
			{
			_putchar(result + '0');
			}
			else
			{
			if (result < 10)
			{
			_putchar(',');
			_putchar(' ');
                        _putchar(' ');
                        _putchar(result + '0');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
			}
			}
		}
		_putchar('\n');
		table++;
	}
}


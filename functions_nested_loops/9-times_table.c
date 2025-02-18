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

			if (result >= 10)
			{
			_putchar(result / 10 + '0');
			}
			_putchar(result % 10 + '0');
			if (multiple != 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		}
		_putchar('\n');
		table++;
	}
}

#include "main.h"

/**
 *more_numbers - to print digit's 1 to 14 x10
 *
 *Return: ne needed
 */
void more_numbers(void)
{
	char  number;
	int i;

	for (i = 0; i < 10; i++)
	{
	number = 0;
		for (; number < 15; number++)
		{
			if (number > 9)
				_putchar(number / 10 + '0');
		_putchar(number % 10 + '0');
		}
	_putchar('\n');
	}
}

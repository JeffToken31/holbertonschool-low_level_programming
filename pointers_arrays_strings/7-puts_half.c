#include "main.h"

/**
 *puts_half - to print second half of string
 *@str: pointer type char
 *Return: no needed
 */
void puts_half(char *str)
{
	int count, element;

	for (count = 0; str[count]; count++)
	;

	count = count % 2 != 0 ? count + 1 : count;

	for (element = count / 2; str[element]; element++)
	{
		_putchar(str[element]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 *_puts - to modifie value of variable with pointer
 *@str: pointer type char
 *Return: no needed
 */
void _puts(char *str)
{
	int element_of_array;

	for (element_of_array = 0; str[element_of_array];)
	{
		_putchar(str[element_of_array]);
		element_of_array++;
	}
	_putchar('\n');
}

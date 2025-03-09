#include "main.h"

/**
 *puts2 - to modifie value of variable with pointer
 *@str: pointer type char
 *Return: no needed
 */
void puts2(char *str)
{
	int element_of_array;

	for (element_of_array = 0; str[element_of_array];)
	{
		if (element_of_array % 2 == 0)
		{
		_putchar(str[element_of_array]);
		}
		element_of_array++;
	}
	_putchar('\n');
}

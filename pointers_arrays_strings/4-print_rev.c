#include "main.h"

/**
 *print_rev - to reverse a string
 *@s: pointer type char
 *Return: no needed
 */
void print_rev(char *s)
{
	int element_of_array;

	for (element_of_array = 0; s[element_of_array];)
	{
		element_of_array++;
	}
	element_of_array--;
	while (element_of_array >= 0)
	{
		_putchar(s[element_of_array]);
		element_of_array--;
	}
	_putchar('\n');
}

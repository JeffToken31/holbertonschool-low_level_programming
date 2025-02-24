#include "main.h"

/**
 *print_line - to draw a straight line with _
 *@n: type int
 *Return: ne needed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

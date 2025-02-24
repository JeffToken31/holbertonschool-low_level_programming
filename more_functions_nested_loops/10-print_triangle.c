#include "main.h"

/**
 *print_triangle - to draw a triangle
 *@size: type int
 *Return: no needed
 */
void print_triangle(int size)
{
	int line, square, space;

	if (size < 1)
		_putchar('\n');

	else

	for (line = 1; line <= size; line++)
	{
		for (space = size - line - 1; space >= 0; space--)
		{
			_putchar(' ');
		}
		square = 1;
		for (; square <= line; square++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

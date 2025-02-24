#include "main.h"

/**
 *print_square - to draw a straight line with _
 *@size: type int
 *Return: no needed
 */
void print_square(int size)
{
	int line, square;

	if (size < 1)
		_putchar('\n');

	else

	for (line = 0; line < size; line++)
	{
		for (square = 0; square < size; square++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 *print_diagonal - to draw a diagonal with spaces and slash
 *@n: type int
 *Return: no needed
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	if (n != 0)
	{

		while (n > 0)
		{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		i++;
		}
	}
	else
		_putchar('\n');
}

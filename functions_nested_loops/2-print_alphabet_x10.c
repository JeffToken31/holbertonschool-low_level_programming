#include "main.h"

/**
 *print_alphabet_x10 - to print list alphabet x10
 *
 *Return: (0) if correct
 */
void print_alphabet_x10(void)
{
	int  nbra;
	int lsa;

	for (nbra = 0; nbra < 10; nbra++)
	{
	lsa = 97;
		for (; lsa < 123; lsa++)
		{
		_putchar(lsa);
		}
	_putchar('\n');
	}
}

#include "main.h"

/**
 *main - putchar function
 *Return: 0 if correct
 */
void print_alphabet(void)
{
	int lsa = 97;
	
	for (; lsa < 123; lsa++)
	{
	_putchar(lsa);
	}
	_putchar('\n');
	return;
}

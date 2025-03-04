#include "main.h"

/**
 *_puts_recursion - print char
 *@s: pointer type char
 *Return: print
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0 ; s[i]; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

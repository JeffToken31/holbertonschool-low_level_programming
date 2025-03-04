#include "main.h"

/**
 *_puts_recursion - print char
 *@s: pointer type char
 *Return: print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (i < s[i])
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		_putchar('\n');
}

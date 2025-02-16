#include <stdio.h>

/**
 *main - putchar function
 *Return: 0 if correct
 */
int main(void)
{
	int ch = 122;

	for (; ch > 96; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

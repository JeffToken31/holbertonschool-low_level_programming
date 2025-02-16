#include <stdio.h>

/**
 *main - putchar function
 *Return: 0 if correct
 */
int main(void)
{
	int ch = 97;

	for (; ch < 123; ch++)
	{
		if (ch == 101 || ch == 113)
		{
		}
		else
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}

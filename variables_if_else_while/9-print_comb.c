#include <stdio.h>

/**
 *main - putchar function
 *Return: 0 if correct
 */
int main(void)
{
	int ch = 48;

	for (; ch < 58; ch++)
	{
	putchar(ch);
		if (ch == 57)
		{
		putchar('\n');
		}
		else
		{
		putchar(32);
		putchar(44);
		}
	}
	return (0);
}

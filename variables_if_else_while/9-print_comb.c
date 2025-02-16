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
	putchar(44);
	putchar(32);
	}
	putchar('\n');
	return (0);
}

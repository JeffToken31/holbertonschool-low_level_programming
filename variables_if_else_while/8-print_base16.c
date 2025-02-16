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
	}
	ch = 97;
	for (; ch < 103; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

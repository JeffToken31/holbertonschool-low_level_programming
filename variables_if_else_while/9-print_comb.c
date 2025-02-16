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
		if (ch == 48)
		{
		putchar(ch);
		}
		else
		{
		putchar(32);
		putchar(44);
		putchar(ch);
		}	
	}
	return (0);
}

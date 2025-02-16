#include <stdio.h>

/**
 *main - putchar function
 *Return: 0 if correct
 */
int main(void)
{
	int minchar = 97;
	int maxchar = 65;

	for (; minchar < 123; minchar++)
	{
	putchar(minchar);
	}
	
	for (; maxchar < 91; maxchar++)
	{
	putchar(maxchar);
	}
	putchar('\n');
	return (0);
}

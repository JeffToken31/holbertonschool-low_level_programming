#include "main.h"

/**
 **_memset - to return a string with height choosed
 *@s: string to contvert
 *@b: char to keep and return on s
 *@n: quantity of b to inser
 *Return: *char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

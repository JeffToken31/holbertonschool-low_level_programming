#include "main.h"
#include <stdio.h>
/**
 **leet - to encode 1337
 *@s: pointer type char
 *Return: type char
 */
char *leet(char *s)
{
	int i, j;
	char symbole[10] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char digit[10] = { '4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; *(s + i)  != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == symbole[j])
			{
				s[i] = digit[j];
			}
		}
	}
	return (s);
}

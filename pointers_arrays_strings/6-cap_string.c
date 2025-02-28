#include "main.h"
#include <stdio.h>
/**
 **cap_string - to capitalize first letter of word
 *@s: pointer type char
 *Return: type char
 */
char *cap_string(char *s)
{
	int i, j;
	char symbole[14] = { 32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = 0;
			for (; j < 14; j++)
			{
				if (s[i - 1] == symbole[j])
				{
					s[i] = s[i] - 'a' + 'A';
				}
			}
		}
	}
	return (s);
}

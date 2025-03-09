#include "main.h"

/**
 *rev_string - to reverse a string
 *@s: pointer type char
 *Return: no needed
 */
void rev_string(char *s)
{
	int length, i;
	char temp;

	for (length = 0; s[length]; length++)
		;

	length--;
	i = 0;
	for (; i < length; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length--] = temp;
	}
}

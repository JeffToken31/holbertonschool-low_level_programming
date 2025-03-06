#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *wildcmp - to check relation between elements of char
 *@s1: char to check
 *@s2: char to compare
 *Return: 1 if true
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
	}
	return (0);
}

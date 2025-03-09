#include "main.h"
#include <stdio.h>

/**
 * *_strchr - prints a string at start of c
 * @s: variable to set
 * @c: char to star of
 * Return: char setting
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s);

		s++;
	}

	if (c != '\0')
		return ('\0');

	return (s);
}

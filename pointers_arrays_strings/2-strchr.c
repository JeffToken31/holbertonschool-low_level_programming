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

	if (s[i] == '\0')
		return (s);
	while (s[i] != c)
	{
		s++;
	}
	return (s);
}

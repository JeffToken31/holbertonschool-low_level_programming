#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *is_palindrome - to check if char is palindrome
 *@s: char to check
 *Return: 0 if sucess
 */

int is_palindrome(char *s)
{
	int j = _strlen(s);

	if (j <= 1)
		return (1);
	return (checker(s, j - 1));
}

/**
 *checker - check if s is palindrome
 *@s: char to check
 *@j: last char of s
 *Return: she same
 */

int checker(char *s, int j)
{
	if (*(s + 1) == '\0')
	{
		return (1);
	}
	if ((*s) != *(s + j))
	{
		return (0);
	}
	return (checker(s + 1, j - 2));
}

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
	int j = _strlen_r(s);

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

/**
 *_strlen_r - function strlen with recursion
 *@s : char counted
 *Return: lenght of s
 */

int _strlen_r(char *s)
{
	int i = 1;

	if (*s)
	{
		i = i + _strlen_r(s + 1);
		return (i++);
	}
	return (0);
}

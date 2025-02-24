#include "main.h"

/**
 *_isdigit - is to check if char is a digit
 *@c: type char
 *Return: (1) if isdigit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

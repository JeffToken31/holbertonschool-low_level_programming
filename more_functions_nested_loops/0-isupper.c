#include "main.h"

/**
 *_isupper - is to check if char is uppercase
 *
 *Return: (1) if isupper
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 **string_toupper - convert to uppercase
 *@s: pointer type char
 *Return: type char
 */
char *string_toupper(char *s)
{
	char *upper = s;
	int i;

	i = 0;
	while (upper[i] != '\0')
	{
	if (upper[i] >= 'a' && upper[i] <= 'z')
		upper[i] = upper[i] - 'a' + 'A';
	i++;
	}
	return (upper);
}

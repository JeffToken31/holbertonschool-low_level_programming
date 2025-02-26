#include "main.h"
#include <stdio.h>

/**
 **_atoi - to convert a char in int
 *@s: pointer type char
 *Return: return int
 */
int _atoi(char *s)
{
	int i, result, count, first, last;

	i = 0;
	result = 0;
	count = 0;

	for (; s[i]; i++)
	{
		if ((s[i] >= '0' && s[i] <= '9') && (s[i - 1] < '0' || s[i - 1] > '9'))
			first = i;
		if ((s[i] >= '0' && s[i] <= '9') && (s[i + 1] < '0' || s[i + 1] > '9'))
			last = i;
	}

	for (i = first; i <= last; i++)
		result = result * 10 + ((int)s[i] - '0');
	if (s[i] == '-')
		count++;

	if (count % 2 != 0)
		result *= -1;
	return (result);
}

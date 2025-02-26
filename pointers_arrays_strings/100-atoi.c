#include "main.h"
#include <stdio.h>

/**
 **_atoi - to convert a char in int
 *@s: pointer type char
 *Return: return int
 */
int _atoi(char *s)
{
	int i, result, count;
	
	i = 0;
	result = 0;
	count = 0;
	for (; s[i]; i++)

	if (s[i] >= '0' && s[i] <= '9')
		result = result * 10 + (s[i] - '0');
	else if (s[i] == '-')
		count++;
	if (count % 2 != 0)
		result *= -1;
	return (result);
}

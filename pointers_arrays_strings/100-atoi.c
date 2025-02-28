#include "main.h"
#include <stdio.h>
#define INT_MIN (-2147483648)

/**
 **_atoi - to convert a char in int
 *@s: pointer type char
 *Return: return int
 */
int _atoi(char *s)
{
	int i, result, count, overflow;

	i = 0;
	result = 0;
	count = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			overflow = result;
			result = result * 10 + ((int)s[i] - '0');
			if (result / 10 != overflow)
				result = INT_MIN;
		}
		else if (s[i] == '-')
		{
			count++;
		}
		else if (result != 0)
		{
			break;
		}
		else if (result == INT_MIN)
		{
			return (result);
		}
	}
	if (count % 2 != 0)
		result *= -1;
	return (result);
}

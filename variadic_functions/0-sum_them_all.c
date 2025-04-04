#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - addition all numbers given as args
 *@n: numbers of aguments
 *Return: sum of all argument
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}

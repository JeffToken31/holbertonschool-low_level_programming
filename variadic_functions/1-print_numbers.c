#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print numbers with handle separator
 *@separator: to choose separator between number
 *@n: numbers of arguments to print
 *Return: print number with separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (separator == NULL)
		separator = "";
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d%s\n", va_arg(numbers, int));
		else
			printf("%d%s", va_arg(numbers, int), separator);
	}
	va_end(numbers);
}

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

	va_start(numbers, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL || n == 0)
			printf("%d%s", va_arg(numbers, int), separator);
		else
			printf("%d", va_arg(numbers, int));
	}
	printf("%d\n", va_arg(numbers, int));
	va_end(numbers);
}

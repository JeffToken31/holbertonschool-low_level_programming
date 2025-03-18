#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - print string with handle separator
 *@separator: to choose separator between number
 *@n: numbers of arguments to print
 *Return: print string with separator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *copy;

	if (separator == NULL)
		separator = "";
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		copy = va_arg(string, char *);

		if (copy == NULL)
			copy = "(nil)";
		if (i == n - 1)
			printf("%s", copy);
		else
			printf("%s%s", copy, separator);
	}
	printf("\n");
	va_end(string);
}

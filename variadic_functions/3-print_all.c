#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *printf_char - print a char
 *@args: va_list
 *Return: print a char
 */

void printf_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 *printf_int - printf an integer
 *@args: va_list
 *Return: print a char
 */

void printf_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 *printf_float - printf a float
 *@args: va_list
 *Return: print a float
 */

void printf_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 *printf_string - printf a string
 *@args: va_list
 *Return: print a char *
 */

void printf_string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 *print_all - print
 *@format: use to keep type of variable to print
 *Return: print string with separator
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";
	op_t print[] = {
		{'c', printf_char},
		{'i', printf_int},
		{'f', printf_float},
		{'s', printf_string},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (print[j].op)
		{
			if (format[i] == print[j].op)
			{
				printf("%s", separator);
				separator = ", ";
				print[j].f(args);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

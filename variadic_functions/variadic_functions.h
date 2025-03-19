#include <stdarg.h>
#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct op
{
	char op;
	void (*f)(va_list args);
} op_t;
void printf_char(va_list args);
void printf_int(va_list args);
void printf_string(va_list args);
void printf_float(va_list args);
#endif

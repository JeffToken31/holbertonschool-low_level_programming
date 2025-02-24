#include "main.h"
#include <stdio.h>

/**
 *main - print still 100 with multiple 3 and 5 = fizz and buzz
 *@: no need
 *Return: 0 if sucess
 */
int main(void)
{
	int digit;

	digit = 1;

	for (; digit < 101; digit++)
	{
		if (digit % 3 == 0)
		{
			printf("Fizz ");
		}

		if (digit % 5 == 0)
		{
			printf("Buzz ");
		}

		if (digit % 3 == 0 && digit % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		if (digit % 3 != 0 && digit % 5 != 0)	
		{
			printf("%d ",digit);
		}
	}
	putchar('\n');	
	return (0);
}

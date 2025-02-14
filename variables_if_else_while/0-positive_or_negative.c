#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - srand function
 *Return: 0 if correct
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positve\n", n);
	else if (n > 0)
		printf("%d is negatitve\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}

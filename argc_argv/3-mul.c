#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the multiplacation of 2 numbers
 *@argc: argument counter type int
 *@argv: strings who's contain arguments
 *Return: 0 if success
 */
int main(__attribute__((unused))int argc, char **argv)
{
	int i = 1;
	int result = 1;
	int num = atoi(argv[i]);

	while (argv[i])
	{
		num = atoi(argv[i]);

		if (argc < 3 || argc > 5)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result *= num;
		}

		i++;
	}
	printf("%d\n", result);
	return (0);
}


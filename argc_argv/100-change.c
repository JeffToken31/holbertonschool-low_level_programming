#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - print sum of number of cent give
 *@argc: argument counter type int
 *@argv: strings who's contain arguments
 *Return: 0 if success
 */
int main(__attribute__((unused))int argc, char **argv)
{
	int cent, nbr_cent = 0;

	if (argc < 2)
	{	printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cent != 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
		}
		else if (cent >= 10 && cent < 25)
		{
			cent -= 10;
		}
		else if (cent >= 5 && cent < 10)
		{
			cent -= 5;
		}
		else if (cent >= 2 && cent < 5)
		{
			cent -= 2;
		}
		else
		{
			cent -= 1;
		}
		nbr_cent++;
	}
	printf("%d\n", nbr_cent);
	return (0);
}

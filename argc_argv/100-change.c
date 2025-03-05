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
	int cent, i = 0, nbr_cent = 0;

	if (argc < 2)
	{	printf("Error\n");
		return (1);
	}
	for (; argv[i]; i++)
	{
		cent = atoi(argv[i]);
	}
	for (; cent != 0; nbr_cent++)
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
	}
	printf("%d\n", nbr_cent);
	return (0);
}

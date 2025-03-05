#include <stdio.h>

/**
 *main - print all arguments
 *@argc: argument counter type int
 *@argv: strings who's contain arguments
 *Return: void
 */
int main(__attribute__((unused))int argc, char **argv)
{
	int i = 1;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}


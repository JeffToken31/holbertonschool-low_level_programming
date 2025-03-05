#include <stdio.h>

/**
 *main - print numbers arguments
 *@argc: argument counter type int
 *@argv: strings who's contain arguments
 *Return: void
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}


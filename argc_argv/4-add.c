#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - print the addition of all numbers
 *@argc: argument counter type int
 *@argv: strings who's contain arguments
 *Return: 0 if success
 */
int main(__attribute__((unused))int argc, char **argv)
{
	int i = 1, j;
	int result = 0;
	char *str;

	while (argv[i])
	{
		str = argv[i];
		j = 0;
		while (str[j])
		{
			if (!isdigit(str[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		result += atoi(str);
		i++;
	}
	printf("%d\n", result);

	return (0);
}


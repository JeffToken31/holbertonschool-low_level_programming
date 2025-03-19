#include <stdio.h>
#include <stdlib.h>

/**
 *main - print is own opcode in hexadecimal
 *@argc: argument counter
 *@argv: arguments to keep
 *Return: 0 if succes
*/

int main(int argc, char **argv)
{
	int n_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	char *keep_main = ((char *) main);


	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", keep_main[i]);
		if (i < n_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - call function in struct
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0 if sucess
*/

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "%") || strcmp(argv[2], "/")) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}

#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - calculator main func
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	i = p(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", i);
	return (0);
}

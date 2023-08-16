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
	int i, a, b, (*p)(int, int);

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
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	i = p(a, b);

	printf("%d\n", i);
	return (0);
}

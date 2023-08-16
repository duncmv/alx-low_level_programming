#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the opcodes of its own function
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	a = (char *)main;

	for (i = 0; i < n; i++)
	{
		if (i == n -1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		else
		{
			printf("%02hhx ", a[i]);
		}
	}
	return (0);
}

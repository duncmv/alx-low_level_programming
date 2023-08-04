#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument string array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *p;
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];

			if (!(*p >= '0' && *p <= '9'))
			{
				printf("Error\n");
				return (0);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

#include "main.h"
#include <stdlib.h>
#include "stdio.h"
/**
 * main - prints minimumcent coints needed
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 1 or 0
 */
int main(int argc, char **argv)
{
	int n, i, num, a;
	int cent[5] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		num = 0;

		if (n < 1)
		{
			printf("0\n");
		}
		else
		{
			for (i = 4; i > 0; i--)
			{
				while (n >= cent[i])
				{
					a = n / cent[i];
					n %= cent[i];
					num += a;
				}
			}
			if (n == 1)
				num++;
			printf("%d\n", num);
		}
	}
	return (0);
}

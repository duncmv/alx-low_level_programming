#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from @n to 98
 * @n: nt type arg
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
	else
	{
		printf("98\n");
	}
}

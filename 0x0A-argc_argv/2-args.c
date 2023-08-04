#include <stdio.h>
#include "main.h"
/**
 * main - prints its args
 * @argc: argument count
 * @argv: argument string array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}

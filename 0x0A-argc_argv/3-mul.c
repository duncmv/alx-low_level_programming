#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two integers
 * @argc: argument count
 * @argv: argument string array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else 
		printf("Error\n");
	return (0);
}

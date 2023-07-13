#include <stdio.h>
/**
 * main - a function that prints size of various types
 * @a: character variable
 * @b: integer variable
 * @c: long integer variable
 * @d: long long integer variable
 * @e: float variable
 *
 * Return: 0
 */
int main(char a, int b, long int c, long long int d, float e)
{
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}

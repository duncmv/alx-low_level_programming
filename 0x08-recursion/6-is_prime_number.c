#include "main.h"
/**
 * is_prime - calculates for prime
 * @n: number to be checked
 * @i: divisor
 *
 * Return: 1 or 0
 */
int is_prime(int n, int i)
{
	if (n <= 1 || (n != i && n % i == 0))
		return (0);
	else if (n == i)
		return (1);
	else
		return (is_prime(n, i + 1));
}
/**
 * is_prime_number - checks for prime
 * @n: number to be checked
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

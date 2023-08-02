#include "main.h"
/**
 * _sqrt_recursion - returns the natural sqroot of a number
 * @n: int type arg
 *
 * Return: sqrt of n, or -1 if no natural root
 */
int _sqrt_recursion(int n)
{
	return (getroot(n, 1));
}
/**
 * getroot - help function
 * @n: original number to find root
 * @i: first possible root
 *
 * Return: root or -1 if no natural root
 */
int getroot(int n, int i)
{
	int sq;

	sq = i * i;

	if (sq == n)
		return (i);
	else if (sq < n)
		return(getroot(n, i + 1));
	else
		return (-1);
}


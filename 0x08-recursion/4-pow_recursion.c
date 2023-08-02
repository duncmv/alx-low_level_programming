#include "main.h"
/**
 * _pow_recursion - returns the value of x raise to power y
 * @x: int type arg
 * @y: int type arg
 *
 * Return: value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return(x * _pow_recursion(x, y - 1));
}

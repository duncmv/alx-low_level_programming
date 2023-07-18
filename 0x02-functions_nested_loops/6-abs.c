#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @a: int type arg
 *
 * Return: absolute value of @a
 */
int _abs(int a)
{
	if (a < 0)
		a *= -1;
	return (a);
}

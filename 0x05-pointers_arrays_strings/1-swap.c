#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: int pointer arg
 * @b: int pointer arg
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

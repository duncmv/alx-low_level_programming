#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string of binary
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int len = (int)strlen(b), i;
	unsigned int num, n, factor = 1;

	if (b[len - 1] != '0' && b[len - 1] != '1')
		return (0);
	num = b[len - 1] == '0' ? 0 : 1;

	for (i = len - 2; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n = b[i] == '0' ? 0 : 1;
		factor *= 2;
		num += n * factor;
	}
	return (num);
}

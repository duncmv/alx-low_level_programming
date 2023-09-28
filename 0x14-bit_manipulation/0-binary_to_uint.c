#include "main.h"
/**
 * binary_to_uint -converts a binary number to unsigned int
 * @b: pointer to string of 1 and 0
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, bin;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (bin = 1, n = 0, i--; i >= 0; i--, bin *= 2)
	{
		if (b[i] == '1')
			n += bin;
	}
	return (n);
}

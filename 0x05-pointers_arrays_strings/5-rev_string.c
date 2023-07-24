#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char type arg
 */
void rev_string(char *s)
{
	int i, ind, z, n;
	char x, tmp;

	n = 0;

	while (x != '\0')
	{
		x = *(s + n);

		if (x != '\0')
			n++;
	}

	ind = n - 1;

	i = 0;

	z = 1;

	while (i < z)
	{
		tmp = *(s + i);
		z = ind - i;
		*(s + i) = *(s + z);
		*(s + z) = tmp;
		i++;
	}
}

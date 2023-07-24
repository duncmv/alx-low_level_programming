#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char type arg
 */
void rev_string(char *s)
{
	int i, ind, n;
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

	while (i < ind)
	{
		tmp = *(s + i);
		*(s + i) = *(s + ind);
		*(s + ind) = tmp;
		i++;
		ind--;
	}
}

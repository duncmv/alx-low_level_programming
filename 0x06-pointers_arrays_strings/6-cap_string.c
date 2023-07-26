#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: pointer to a string
 *
 * Return: pointer to c
 */
char *cap_string(char *c)
{
	int i, j;

	char a[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	if (c[0] > 96 && c[0] < 123)
		c[0] -= 32;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (c[i] == a[j] && c[i + 1] > 96 && c[i + 1] < 123)
				c[i + 1] -= 32;
		}
	}
	return (c);
}

#include "main.h"
/**
 * leet - encodes to 1337 (leet)
 * @c: pointer to string
 *
 * Return: pointer to c
 */
char *leet(char *c)
{
	int i, j;
	char leeta[10] = "aAeEoOtTlL";
	char leetn[10] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == leeta[j])
				c[i] = leetn[j];
		}
	}
	return (c);
}

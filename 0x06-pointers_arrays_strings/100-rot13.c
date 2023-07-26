#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @c: pointer to a string
 *
 * Return: pointer to c
 */
char *rot13(char *c)
{
	int i, j;
	char rot1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	char rot2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLMN"

	for (i = 0; c[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == rot1[j])
				c[i] = rot2[j];
		}
	}
	return (c);
}

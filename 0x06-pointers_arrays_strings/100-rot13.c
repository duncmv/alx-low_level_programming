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
	char rot1[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot2[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLMN";

	for (i = 0; c[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (rot1[j] == *(c + i))
				*(c + i) = rot2[j];
		}
	}
	return (c);
}

#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return:  number of bytes in the initial segment of s which
 *consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		int trigger = 0;

		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				trigger = 1;
		if (trigger)
			continue;
		else
			break;
	}
	n = i;

	return (n);
}

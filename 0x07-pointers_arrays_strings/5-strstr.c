#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to searched
 * @needle: substring searched for
 *
 * Return: pointer to beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, x, y;

	for (x = 0; haystack[x]; x++)
		;

	for (y = 0; needle[y]; y++)
		;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; (i + j) <= x; j++)
			{
				if (haystack[i + j] == needle[j])
					continue;
				else
					break;	
			}
			if (j == y)
				return (haystack + i);
		}
	}
	return ('\0');
}

#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char type arg
 */
void rev_string(char *s)
{
	int n = 0;

	char x;

	while (x != '\0')
	{
		x = *(s + n);

		if (x != '\0')
			n++;
	}
	int index = n - 1;

	int z = 1;

	int i;
	char tmp;

	for (i = 0; i < z; i++)
	{
		tmp = *(s + i);
		z = index - i;
		*(s + i) = *(s + z);
		*(s + z) = tmp;
	}
}

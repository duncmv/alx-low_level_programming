#include "main.h"
/**
 * get_endianness -  checks the endianness
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	int num = 1;
	char *p = (char *)&num;

	return ((int)p[0] == 1);
}

#include "main.h"
/**
 * main - program that prints _putchar followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char n[] = "_putchar";
	int i = 0;

	while (n[i] != "\0")
	{
		_putchar(n[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

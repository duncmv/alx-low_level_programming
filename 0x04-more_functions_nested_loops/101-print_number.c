#include "main.h"
/**
 * print_digit - print digits recursively
 * @n: integer
 *
 */
void print_digit(int n)
{
	if (n == 0)
	{
		return;
	}
	print_digit(n / 10);  /* Recursively call for remaining digits*/
	_putchar('0' + (n % 10));  /* Print the current digit*/
}

/**
 * print_number - prints number
 * @n: integer
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_digit(-n);
	}
	else
	{
		print_digit(n);
	}
}

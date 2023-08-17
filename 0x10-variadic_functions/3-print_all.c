#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * pchar - prints char
 * @list: va_list pased to func
 */
void pchar(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * pint - prints int
 * @list: va_list pased to func
 */
void pint(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * pfloat - prints float
 * @list: va_list pased to func
 */
void pfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * pstring - prints string
 * @list: va_list pased to func
 */
void pstring(va_list list)
{
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: list of all arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list list;

	form arr[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstring}
	};

	va_start(list, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == arr[j].type[0])
			{
				printf("%s", separator);
				arr[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}

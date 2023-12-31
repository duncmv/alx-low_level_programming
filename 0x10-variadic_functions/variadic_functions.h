#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void pchar(va_list list);
void pstring(va_list list);
void pint(va_list list);
void pfloat(va_list list);
/**
 * struct form - struct to be used in print_all fun
 * @type: specifies the datatype to be printed
 * @f: pointer to func for corresponding type
 */
typedef struct form
{
	char *type;
	void (*f)();
} form;
#endif

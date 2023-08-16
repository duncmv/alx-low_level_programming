#include "function_pointers.h"
/**
 * print_name - prints a string
 * @name: pointer to name
 * @f: pointer to a func that specifies format for print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

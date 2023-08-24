#include "lists.h"
/**
 * print_list - prints all elements of a linked list
 * @h: pointer to a list structure
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	char *s;

	if (h == NULL)
	{
	return (n);
	}
	else
	{
		if (h->str == NULL)
		{
			s = "(nil)";
			printf("[0] %s\n", s);
			n++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			n++;
		}
	}
	if (h->next != NULL)
		n += print_list(h->next);
	return (n);
}

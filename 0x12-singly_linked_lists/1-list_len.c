#include "lists.h"
/**
 * list_len - returns number of elements of a linked list
 * @h: pointer to a list structure
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (n);
	}
	n++;
	if (h->next != NULL)
		n += list_len(h->next);
	return (n);
}

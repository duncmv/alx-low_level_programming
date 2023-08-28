#include "lists.h"
/**
 * listint_len - returns number of elements of a listint_t list
 * @h: pointer to start of list
 * Return: number of elements of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (h != NULL)
	{
		n++;
		if (h->next != NULL)
			n += listint_len(h->next);
	}
	return (n);
}

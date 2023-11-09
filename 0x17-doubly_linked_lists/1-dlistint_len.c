#include "lists.h"
/**
 * dlistint_len - return number of elements in a doubly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		i++;
		i += dlistint_len(h->next);
	}
	return (i);
}

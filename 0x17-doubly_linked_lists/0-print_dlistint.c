#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		i += print_dlistint(h->next);
	}
	return (i);
}

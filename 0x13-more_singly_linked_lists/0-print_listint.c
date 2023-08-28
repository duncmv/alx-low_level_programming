#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to start of list
 * Return: number of elements of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		if (h->next != NULL)
			n += print_listint(h->next);
	}
	return (n);
}

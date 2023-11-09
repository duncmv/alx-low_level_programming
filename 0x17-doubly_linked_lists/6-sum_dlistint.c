#include "lists.h"
/**
 * sum_dlistint - return sum of elements in a doubly linked list
 * @head: head of the list
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int i = 0;

	for (temp = head; temp != NULL; temp = temp->next)
		i += temp->n;
	return (i);
}

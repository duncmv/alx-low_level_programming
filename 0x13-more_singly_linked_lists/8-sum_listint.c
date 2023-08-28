#include "lists.h"
/**
 * sum_listint - returns the sum of all data in the list
 * @head: pointer to the beginning of list
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *nxt;

	if (head)
	{
		nxt = head;
		while (nxt)
		{
			sum += nxt->n;
			nxt = nxt->next;
		}
	}
	return (sum);
}

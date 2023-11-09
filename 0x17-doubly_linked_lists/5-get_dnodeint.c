#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to start of a list
 * @index: index of node in list to be found
 * Return: address of indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth = NULL;
	unsigned int i;

	if (head != NULL)
	{
		nth = head;
		for (i = 0; i < index; i++)
		{
			nth = nth->next;
			if (nth == NULL)
				return (NULL);
		}
	}
	return (nth);
}

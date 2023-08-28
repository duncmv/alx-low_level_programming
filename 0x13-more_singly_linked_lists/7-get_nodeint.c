#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to start of a list
 * @index: index of node in list to be found
 * Return: address of indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth = NULL;
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

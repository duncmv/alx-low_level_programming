#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to pointer to start of a list
 * @idx: index of list where new node should be added
 * @n: int to be added as a member
 * Return: address of node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *index, *ins = NULL;

	index = *h;
	ins = malloc(sizeof(dlistint_t));
	if (!ins)
		return (NULL);

	if (idx != 0)
	{
		for (i = 0; i < (idx - 1); i++)
		{
			index = index->next;
			if (!index)
			{
				free(ins);
				return (NULL);
			}
		}
		ins->n = n;
		ins->next = index->next;
		ins->next->prev = ins;
		index->next = ins;
		ins->prev = index;

	}
	else if (idx == 0)
	{
		ins->prev = NULL;
		ins->n = n;
		ins->next = *h;
		ins->next->prev = ins;
		*h = ins;
	}

	return (ins);
}

#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to pointer to start of a list
 * @idx: index of list where new node should be added
 * @n: int to be added as a member
 * Return: address of node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *index, *ins = NULL;

	index = *head;
	ins = malloc(sizeof(listint_t));
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
		index->next = ins;
	}
	else if (idx == 0)
	{
		ins->n = n;
		ins->next = *head;
		*head = ins;
	}

	return (ins);
}

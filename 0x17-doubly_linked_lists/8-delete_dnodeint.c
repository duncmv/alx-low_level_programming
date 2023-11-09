#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to a pointer to the beginning of a list
 * @index: index of node to be deleted
 * Return: 1 or -1;
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	node = *head;
	if (index != 0)
	{
		while (i < (index - 1))
		{
			node = node->next;
			if (!node)
				return (-1);
			++i;
		}
		if (node->next == NULL)
			return (-1);
		temp = node->next;
		node->next = (node->next)->next;
		node->next->prev = node;
		free(temp);
	}
	else
	{
		if (!node->next)
		{
			free(node);
			*head = NULL;
		}
		else
		{
			*head = node->next;
			node->next->prev = NULL;
			free(node);
		}
	}
	return (1);
}

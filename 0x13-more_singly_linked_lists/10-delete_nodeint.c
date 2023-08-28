#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to a pointer to the beginning of a list
 * @index: index of node to be deleted
 * Return: 1 or -1;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	node = *head;
	if (index != 0)
	{
		while (i < (index - 1))
		{
			node = node->next;
			if(!node)
				return (-1);
			++i;
		}
		if(node->next == NULL)
			return (-1);
		temp = node->next;
		node->next = (node->next)->next;
		free(temp);
	}
	else
	{
		if(!node->next)
		{
			free(node);
			*head = NULL;
		}
		else
		{
			*head = node->next;
			free(node);
		}
	}
	return (1);
}

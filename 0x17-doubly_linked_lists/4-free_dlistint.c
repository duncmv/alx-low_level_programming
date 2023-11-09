#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer to start of list
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
		head = NULL;
	}
}

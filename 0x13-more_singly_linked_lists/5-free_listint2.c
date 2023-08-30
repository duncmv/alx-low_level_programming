#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to start of list
 */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}

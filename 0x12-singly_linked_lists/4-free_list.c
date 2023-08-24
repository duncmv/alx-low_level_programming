#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to atrt of a list
 */
void free_list(list_t *head)
{
	if (head != NULL && head->next == NULL)
	{
		free(head);
		return;
	}
	else if (head->next != NULL && head != NULL)
	{
		free(head->next);
	}
	free(head);
	return;
}

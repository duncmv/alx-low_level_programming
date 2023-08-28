#include "lists.h"
/**
 * pop_listint - deletes the hea of a node and returns its data
 * @head: pointer to a pointer to the beginning of a list
 * Return: 0 or n
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		i = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (i);
}

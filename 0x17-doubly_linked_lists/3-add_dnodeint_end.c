#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: pointer to a pointer to the beginning of a listint_list
 * @n: int to be a member of new node
 * Return: address odf new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (*head != NULL && (*head)->next == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = *head;
		(*head)->next = new;
	}
	else if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else if ((*head)->next != NULL)
	{
		free(new);
		new = add_dnodeint_end(&(*head)->next, n);
	}
	return (new);
}

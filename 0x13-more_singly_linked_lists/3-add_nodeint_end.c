#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to a pointer to the beginning of a listint_list
 * @n: int to be a member of new node
 * Return: address odf new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (*head != NULL && (*head)->next == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;
		(*head)->next = new;
	}
	else if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	else if ((*head)->next != NULL)
	{
		new = add_nodeint_end(&(*head)->next, n);
	}
	return (new);
}

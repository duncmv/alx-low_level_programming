#include "lists.h"
/**
 * add_dnodeint - adds a new node at beginning of a listint_t list
 * @head: pointer to a pointer tor the beginning of a list
 * @n: int to be added as member of node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}

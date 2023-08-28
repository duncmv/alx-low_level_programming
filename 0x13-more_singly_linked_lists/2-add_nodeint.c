#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of a listint_t list
 * @head: pointer to a pointer tor the beginning of a list
 * @n: int to be added as member of node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning
 * @head: pointer to a pointer to the beginning of the list
 * @str: a string to be the member of the node created
 * Return: pointer to new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = (unsigned int)strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

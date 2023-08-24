#include "lists.h"
#include "string.h"
/**
 * add_node_end - adds a new node to the end of a list
 * @head: pointer to a pointer to the list
 * @str: str to be copied to a member of th struct
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;

	if (*head != NULL && (*head)->next == NULL)
	{
		p = malloc(sizeof(list_t));
		if (p == NULL)
			return(NULL);
		p->str = strdup(str);
		p->len = (unsigned int)strlen(str);
		p->next = NULL;
		(*head)->next = p;
	}
	else if (*head == NULL)
	{
		p = malloc(sizeof(list_t));
		if (p == NULL)
			return (NULL);
		p->str = strdup(str);
		p->len = (unsigned int)strlen(str);
		p->next = NULL;
		*head = p;
	}
	else if ((*head)->next != NULL)
	{
		p = add_node_end(&(*head)->next, str);
	}
	return (p);
}

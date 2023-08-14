#include "dog.h"
#include "string.h"
#include <stdlib.h>
/**
 * new_dog - function that returns a pointer to struct of new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nmcpy, *owncpy;
	int i;
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);
	nmcpy = malloc(sizeof(name));
	if (nmcpy == NULL)
	{
		free(p);
		return (NULL);
	}
	owncpy = malloc(sizeof(owner));
	if (owncpy == NULL)
	{
		free(nmcpy);
		free(p);
		return (NULL);
	}
	else
	{
		for (i = 0; i <= (int)strlen(name); i++)
			nmcpy[i] = name[i];
	}
	for (i = 0; i <= (int)strlen(owner); i++)
		owncpy[i] = owner[i];

	p->name = nmcpy;
	p->age = age;
	p->owner = owncpy;

	return (p);
}

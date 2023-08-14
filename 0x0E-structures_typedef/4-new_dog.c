#include "dog.h"
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
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}

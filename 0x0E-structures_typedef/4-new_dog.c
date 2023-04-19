#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = malloc(strlen(name) + 1);
	p->owner = malloc(strlen(owner) + 1);
	if (p->name == NULL || p->owner == NULL)
	{
		free(owner);
		free(name);
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner);
	return (p);
}

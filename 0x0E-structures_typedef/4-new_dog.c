#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *new_dog - check the code for Holberton School students.
 *@name: is name
 *@age: is a age
 *@owner: is a owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	(*ptr).name = malloc(sizeof(name) + 1);
	if (name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	(*ptr).owner = malloc(sizeof(owner) + 1);
	if ((*ptr).owner == NULL)
	{
		free((*ptr).name);
		free(ptr);
		return (NULL);
	}

	strcpy((*ptr).name, name);
	strcpy((*ptr).owner, owner);
	(*ptr).age = age;

	return (ptr);
}

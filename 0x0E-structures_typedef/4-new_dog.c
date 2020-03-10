#include <stdio.h>
#include "dog.h"
/**
 * *_strcpy - copy string
 * @dest: char to test
 * @src: char to test
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

dest[i] = '\0';
return (dest);
}
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

	_strcpy((*ptr).name, name);
	_strcpy((*ptr).owner, owner);
	(*ptr).age = age;

	return (ptr);
}

#include <stdio.h>
#include "dog.h"
/**
 * print_dog - check the code for Holberton School students.
 *@d: is dog
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
	{
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}


}

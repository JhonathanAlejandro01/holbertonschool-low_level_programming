#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - is a function.
 *@str: is a parameter.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int counter = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
		counter++;
	}
	p = malloc(counter);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for(i = 0; i < counter; i++)
		{
			p[i] = str[i];
		}
		return (p);
	}
}

#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: NULL or pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
	free(p);
}

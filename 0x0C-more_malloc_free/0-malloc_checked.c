#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **malloc_checked - prints buffer in hexa
 * @b: the address of memory to print
 *
 *
 * Return: NULL or pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);


}

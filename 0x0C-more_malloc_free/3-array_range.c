#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{

	int i;
	int j;
	int *a;
 
	if (min > max)
	{
		return (NULL);
	}
 
	j = max - min + 1;
	a = malloc(sizeof(int) * j);
	if (a == NULL)
	{
		return (NULL);
	}
 
	for (i = 0; i < j; i++, min++)
	{
		a[i] = min;
	}
 
	return (a);
	
}

#include "holberton.h"
/**
 *clear_bit - function that sets the value of a bit to 0.
 *@n: number.
 *@index: is the index.
 *
 *Return: 1 if it worked, or -1 if an error ocurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int aux = *n;

	if (index > 64)
	{
		return (-1);
	}

	aux = ((aux & ~(1 << index)));
	*n = aux;

	return (1);
}

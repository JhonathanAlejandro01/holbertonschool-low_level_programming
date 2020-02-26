#include "holberton.h"
/**
 * reverse_array - protitype.
 *@a: is a parameter.
 *@n: is a parameter.
 *Return:  always 0.
 */
void reverse_array(int *a, int n)
{
	int j;

	int aux;

	j = 0;
	n = n -1;

	while (j <= n)
	{
		aux = a[j];
		a[j] = a[n];
		a[n] = aux;
		j++;
		n--;
	}
}
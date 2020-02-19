#include "holberton.h"
/**
 * print_array - check the code for Holberton School students.
 * @a: is the parameter.
 * @n: is other parameter.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", x[a]);

		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

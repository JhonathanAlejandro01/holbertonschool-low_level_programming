#include "holberton.h"
/**
 * factorial - prototype.
 *@n: is parameter.
 * Return: Always 0.
 */
int factorial(int n)
{
	int r;

	if (n < 0)
	{
		r = -1;
	}
	else if (n == 0)
	{
		r = 1;
	}
	else
	{
		r = n * factorial(n - 1);
	}
	return (r);
}

#include "holberton.h"
/**
 * _pow_recursion - prototype.
 *@x: is parameter.
 *@y: is parameter.
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	int r;

	if (y < 0)
	{
		r = -1;
	}
	else if (y == 0)
	{
		r = 1;
	}
	else
	{
		r = (x * _pow_recursion(x, y - 1));
	}
	return (r);
}

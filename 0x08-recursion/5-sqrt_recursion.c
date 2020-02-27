#include "holberton.h"

int num(int i, int n);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int type Integer.
 * Return: recursion.
 *
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;

	if (n < 0)
	{
		return (-1);
	}

	return (num(i, n));
}

/**
 *num - function to recursion
 *@i:iterator
 *@n: number of sqrt
 *Return: return recursive character
 */

int num(int i, int n)
{

	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (i * i < n)
	{
		return (num(i + 1, n));
	}

	if (i * i == n)
	{
		return (i);
	}

	return (-1);
}

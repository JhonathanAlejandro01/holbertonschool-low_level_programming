#include "holberton.h"
/**
 * _sqrt_recursion - prototype.
 *@n: is parameter.
 * funtion - is the other part.
 *@i: is the counte.
 * Return: Always 0.
 */
int funtion(int i, int n);
	¬
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (funtion(i, n));
}
int funtion(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (i * i < n)
	{
		return (funtion(i + 1, n));
	}
	if (i * i == n)
	{
		return (i);
	}
	return (-1);
}

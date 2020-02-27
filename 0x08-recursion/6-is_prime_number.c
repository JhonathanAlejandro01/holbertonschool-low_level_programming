#include "holberton.h"

int prime_w(int n, int i);

/**
 *is_prime_number - prototype.
 *@n: number to be checked
 *Return: return 1 if primer 0 otherwise
 */

int is_prime_number(int n)
{

	int i;

	i = 2;

	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (prime_w(n, i));

}

/**
 *prime_w - recursion loop
 *@n: number to be considered
 *@i: number to iterate
 *Return: return 1or 0
 */

int prime_w(int n, int i)
{

	if (i == n - 1)
	{
		return (1);
	}

	if (n % i  == 0)
	{
		return (0);
	}

	if (n % i  != 0)
	{
		return (prime_w(n, i + 1));
	}

	return (0);

}

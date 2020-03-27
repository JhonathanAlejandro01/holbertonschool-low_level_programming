#include "holberton.h"
/**
 *print_binary - function that prints the binary representation of a number.
 *@n: is a number that convert to binary.
 *
 *Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	aux = n;
	i = 0;

	while ((aux >>= 1) > 0)
	{
		i++;
	}
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		i--;
	}
}

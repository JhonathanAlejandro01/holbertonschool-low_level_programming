#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *@q: is the parameter
 * Return: Always 0.
 */
int print_last_digit(int q)
{
	int l;

	if (q < 0)
	{
		q = -1;
	}
	l = q % 10;
	if (l < 0)
	{
		l = -l;
	}
	_putchar (l + '0');
	return (l);
}

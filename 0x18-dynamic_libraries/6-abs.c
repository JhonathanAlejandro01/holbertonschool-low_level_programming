#include "holberton.h"

/**
 * _abs - valor absolute.
 *@x: this parameter
 *
 * Return: always 0 or 1.
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
}

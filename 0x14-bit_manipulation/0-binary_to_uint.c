#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *@b: b is pointing to string of 0 and 1 chars.
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, pow;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	i = 0;

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	num = 0;
	pow = 1;
	i--;

	while (i >= 0)
	{
		if (b[i] == '1')
		{
			num = num + pow;
		}
		i--;
		pow = pow * 2;
	}
	return (num);
}

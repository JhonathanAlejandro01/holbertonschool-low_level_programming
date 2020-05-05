#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: is the parameter.
 * @accept: is other parameter.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int i, j, x;

	i = 0;

	while (s[i] != '\0')
	{
		x = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x = 1;
			}
		}
		j = 0;
		if (x == 0)
		{
			break;
		}
		num++;
		i++;
	}
	return (i);
}

#include "holberton.h"
/**
 * _strpbrk - prototype.
 * @s: is the parameter.
 * @accept: is parameter.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{

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
		if (x == 1)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}

#include "holberton.h"

/**
 * *_strncat - check the code for Holberton School students.
 *@dest: is a parameter.
 *@src: is a parameter.
 *@n: is parameter
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	if (dest == NULL)
	{
		return (NULL);
	}
	if  (src == NULL)
	{
		return (dest);
	}
	int x;
	int i = 0;
	int y = 0;

	while (dest[y++])
	{
		i++;

	}

	for (x = 0; x < n && src[x]; x++)
	{
		dest[i + x] = src[x];

	}
	return (dest);
}

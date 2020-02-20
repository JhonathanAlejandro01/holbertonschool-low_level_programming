#include "holberton.h"

/**
 * *_strcat - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int i = 0;
	int y = 0;
	while(dest[y++])
	{
		i++;

	}
	for(x = 0; x <= i; x++)
	{
		dest[i + x] = src[x];

	}
	return dest;
}

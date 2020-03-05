#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - check the code for Holberton School students.
 *@s1: is parameter.
 *@s2: is parameter.
 *@n: is parameter.
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}
	if (n >= b)
	{
		n = b;
		p = malloc(n + a + 1);
	}
	else
	{
		p = malloc((a + n + 1) * sizeof(char));
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		p[c] = s1[c];
	}
	for (d = 0; d < n; d++)
	{
		p[c++] = s2[d];
	}
	p[c++] = '\0';
	return (p);
}
